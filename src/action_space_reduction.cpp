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

// #define TRACE

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
	
	// std::cout << "C++ server: address assigned to python client\n";

	// if( connect( sock, (struct sockaddr *)&server_address, sizeof( server_address ) ) < 0 )
	// {
	// 	std::cout << "C++ server: Connection Failed\n";
	// 	exit( EXIT_FAILURE );
	// }

	sockaddr_in clientAddr;
	socklen_t sin_size = sizeof(struct sockaddr_in);
	int clientSock = accept( sock, (struct sockaddr*)&clientAddr, &sin_size );
	
	std::cout << "C++ server: python client connected\n";

	int count = 0;
	
	while( true )
	{
		State game_state;
		
		char* buffer = new char[1024];
		read( clientSock, buffer, 1024 );
		//auto code = read( clientSock, buffer, 1024 );
		//std::cout << "Confirmation code  " << code << "\n";
		//std::cout << "Server received:  " << buffer << "\n";
		game_state.ParseFromString( buffer );

#if defined TRACE
		std::cout << "Data received from python client.\n";
#endif
		for( int u = 0 ; u < game_state.units_size() ; ++u )
		{
			auto unit = game_state.units( u );
#if defined TRACE
			std::cout << "Actions of unit id=" << unit.unit_id() << ": ";

			for( int a = 0 ; a < unit.actions_id_size() ; ++a )
			{
				if( a == 0 )
					std::cout << unit.actions_id( a );
				else
					std::cout << ", " << unit.actions_id( a );
			}
			std::cout << "\n";
#endif
		}

		// State solution;

		// auto unit = solution.add_units();
		// unit->set_unit_id( 2 );
		// unit->add_actions_id( 21 );
		// unit->add_actions_id( 22 );
		// unit->add_actions_id( 23 );
		
		// unit = solution.add_units();
		// unit->set_unit_id( 5 );
		// unit->add_actions_id( 55 );
		// unit->add_actions_id( 56 );
		// unit->add_actions_id( 57 );
		
		// auto size = solution.ByteSizeLong();
		// char* array = new char[size];
		// solution.SerializeToArray( array, size );
		
		// send( clientSock, (const char*)array, size, 0 );

		// actions XYY, with X the unit ID and YY the action ID.
		// std::vector<int> actions{101, 102, 103,
		//                          201, 203, 204, 205,
		//                          301, 302, 303, 304, 306, 307,
		//                          401, 402, 404};
		// int number_selection = 8;
		// int current_iteration = 1000;
	
		// std::map<int, int> last_usage{ {101, 950}, {102, 950}, {103, 940},
		//                                {201, 960}, {203, 960}, {204, 970}, {205, 950},
		//                                {301, 930}, {302, 930}, {303, 920}, {304, 930}, {306, 950}, {307, 960},
		//                                {401, 990}, {402, 990}, {404, 980} };
		// // Optimal cost 470

		int number_actions = 0;
		std::vector<int> actions;

		for( auto unit : game_state.units() )
		{
			number_actions += unit.actions_id_size();
			for( auto action : unit.actions_id() )
				actions.push_back( 100 * unit.unit_id() + action );
			// std::cout << unit.unit_id() << " ";
		}
		// std::cout << "\n";

		int number_selection = std::min( 2 * game_state.units_size(), number_actions );
		
		// BuilderASR builder( number_selection, current_iteration, actions, last_usage );
		BuilderASR builder( number_selection, actions );
		ghost::Solver solver( builder );

		double cost;
		std::vector<int> solution;

		ghost::Options options;
		options.parallel_runs = true;

		bool solution_found = solver.solve( cost, solution, 1ms, options );		
		++count;
		// std::cout << "Count: " << count << "\n";
		
		State filtered_actions;
		std::map<int,std::vector<int>> unit_actions;

		if( !solution_found )
		{
			std::cout << "Solution not found\n";
			std::cout << "Server received the following data:\n";
			for( int u = 0 ; u < game_state.units_size() ; ++u )
			{
				auto unit = game_state.units( u );
				std::cout << "Actions of unit id=" << unit.unit_id() << ": ";

				for( int a = 0 ; a < unit.actions_id_size() ; ++a )
				{
					if( a == 0 )
						std::cout << unit.actions_id( a );
					else
						std::cout << ", " << unit.actions_id( a );
				}
				std::cout << "\n";
			}
			
			std::cout << "Last candidate [ ";
			for( auto action : solution )
			{
				int unit_id = action / 100;
				int action_id = action % 100;
				std::cout << "unit_" << unit_id << ":" << action_id << " ";
			}
			std::cout << "]\n";
		}
		else
		{
#if defined TRACE
			std::cout << "Sending solution [ ";
#endif
			for( auto action : solution )
			{
				int unit_id = action / 100;
				int action_id = action % 100;

#if defined TRACE
				std::cout << "unit_" << unit_id << ":" << action_id << " ";
#endif
				
				unit_actions[unit_id].push_back( action_id );
			}
#if defined TRACE
			std::cout << "]\n";
#endif			
			for( auto[k, v] : unit_actions )
			{
				auto unit = filtered_actions.add_units();
				unit->set_unit_id( k );
				for( auto action_id : v )
					unit->add_actions_id( action_id );
			}
		}
		
		filtered_actions.set_find_solution( solution_found );
		
		auto size = filtered_actions.ByteSizeLong();
		char* array = new char[size];
		filtered_actions.SerializeToArray( array, size );
		
		send( clientSock, (const char*)array, size, 0 );
	}
}
