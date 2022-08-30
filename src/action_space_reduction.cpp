#include <iostream>
#include <vector>
#include <map>
#include <string> // std::stoi
#include <arpa/inet.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>
#include <unistd.h>
#include <algorithm>

#include <ghost/solver.hpp>

#include "builder_asr.hpp"
#include "../protobuf_code/asr.pb.h"

using namespace std::literals::chrono_literals;

int main( int argc, char **argv )
{
	GOOGLE_PROTOBUF_VERIFY_VERSION;

	int sock = 0;
	sockaddr_in server_address;
	server_address.sin_family = AF_INET;
	server_address.sin_addr.s_addr = INADDR_ANY;
	int port = 1085;
	
	if( ( sock = socket( AF_INET, SOCK_STREAM, 0 ) ) < 0 )
	{
		std::cout << "C++ server: Socket creation error\n";
		exit( EXIT_FAILURE );
	}

	std::cout << "C++ server: Socket created\n";

	server_address.sin_port = htons( port );
	
	// Convert IPv4 and IPv6 addresses from text to binary form
	if( inet_pton( AF_INET, "127.0.0.1", &server_address.sin_addr ) <= 0 ) 
	{
		std::cout << "C++ server: Invalid address/ Address not supported\n";
		exit( EXIT_FAILURE );
	}

	bind( sock, (struct sockaddr*)&server_address, sizeof(struct sockaddr) );
	listen( sock, 1 );
	
	sockaddr_in clientAddr;
	socklen_t sin_size = sizeof(struct sockaddr_in);
	int clientSock = accept( sock, (struct sockaddr*)&clientAddr, &sin_size );
	
	std::cout << "C++ server: python client connected\n";

	while( true )
	{
		Training training;
		Training filtered_actions;
		
		char* buffer = new char[4096];
		read( clientSock, buffer, 4096 );
		training.ParseFromString( buffer );
		
		for( auto environment : training.environments() )
		{
			auto solution_env = filtered_actions.add_environments();
			solution_env->set_environment_id( environment.environment_id() );
			solution_env->set_has_been_found( false );

			// if there is something to handle
			if( environment.has_been_found() )
			{		
				int number_actions = 0;
				std::vector<int> actions;
				
				for( auto unit : environment.units() )
				{
					number_actions += unit.actions_id_size();
					for( auto action : unit.actions_id() )
						actions.push_back( 100 * unit.unit_id() + action );
				}
				
				int number_selection = std::min( 2 * environment.units_size(), number_actions );
				
				// BuilderASR builder( number_selection, current_iteration, actions, last_usage );
				BuilderASR builder( number_selection, actions );
				ghost::Solver solver( builder );
				
				double cost;
				std::vector<int> solution;
				
				bool solution_found = solver.solve( cost, solution, 1ms );		
				
				solution_env->set_has_been_found( solution_found );
				
				if( !solution_found )
					std::cout << "solution not found!!\n";
				else
				{
					std::map<int,std::vector<int>> unit_actions;
					
					for( auto action : solution )
					{
						int unit_id = action / 100;
						int action_id = action % 100;
						
						unit_actions[unit_id].push_back( action_id );
					}
					
					for( auto[k, v] : unit_actions )
					{
						auto unit = solution_env->add_units();
						unit->set_unit_id( k );
						for( auto action_id : v )
							unit->add_actions_id( action_id );
					}
				}
			}
		}
		
		auto size = filtered_actions.ByteSizeLong();
		char* array = new char[size];
		filtered_actions.SerializeToArray( array, size );
		
		send( clientSock, (const char*)array, size, 0 );
	}
}
