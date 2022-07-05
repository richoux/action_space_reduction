#include <iostream>
#include <vector>
#include <map>
#include <string> // std::stoi

#include <ghost/solver.hpp>

#include "builder_asr.hpp"

using namespace std::literals::chrono_literals;

int main( int argc, char **argv )
{
	bool parallel = false;
	
	if( argc == 2 )
		parallel = ( std::stoi( argv[1] ) != 0 );

	// actions XYY, with X the unit ID and YY the action ID.
	std::vector<int> actions{101, 102, 103,
	                         201, 203, 204, 205,
	                         301, 302, 303, 304, 306, 307,
	                         401, 402, 404};
	int number_selection = 8;
	int current_iteration = 1000;
	
	std::map<int, int> last_usage{ {101, 950}, {102, 950}, {103, 940},
	                               {201, 960}, {203, 960}, {204, 970}, {205, 950},
	                               {301, 930}, {302, 930}, {303, 920}, {304, 930}, {306, 950}, {307, 960},
	                               {401, 990}, {402, 990}, {404, 980} };
	
	BuilderASR builder( number_selection, current_iteration, actions, last_usage );
	ghost::Solver solver( builder );

  double cost;
  std::vector<int> solution;

  ghost::Options options;

	if( parallel )
		options.parallel_runs = true;
	
  // Optimal cost 470
  solver.solve( cost, solution, 100ms, options );		

  std::cout << "Cost = " << cost 
            << "\nSolution: ";
  for( auto sol : solution )
	  std::cout << sol << " ";
  std::cout << "\n";
  
  return EXIT_SUCCESS;
  
	// bool success = check_solution( solution );
	
	// if( success )
	// 	return EXIT_SUCCESS;
	// else
	// 	return EXIT_FAILURE;
}
