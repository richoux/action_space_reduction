#include <iostream>
#include <vector>
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
	
	BuilderASR builder( number_selection, actions );
	ghost::Solver solver( builder );

  double error;
  std::vector<int> solution;

  ghost::Options options;

	if( parallel )
		options.parallel_runs = true;
	
  solver.solve( error, solution, 1s, options );		

  std::cout << "Error = " << error 
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
