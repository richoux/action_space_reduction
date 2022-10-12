#include "objective_diversity.hpp"
#include <map>
#include <cmath>

double arith_seq( int n )
{
	if( n <= 0 )
		return 0.0;
	else
		return ( 1 / std::pow( 2.0, n - 1 ) ) + arith_seq( n - 1 );
}

Diversity::Diversity( const std::vector<Variable>& variables,
                      const std::set<int>& set_units,
                      int number_selection )
	: Maximize( variables, "Diversity" ),
	  _set_units( set_units ),
	  _number_selection( number_selection )
{ }

double Diversity::required_cost( const std::vector<Variable*>& variables ) const
{
	double score = 0.;
	std::map<int,int> occurences;
	for( auto& unit : _set_units )
		occurences[ unit ] = 0;
	
	int unit_id;

	// Score increases starting from the second action for the same unit
	for( int i = 0 ; i < _number_selection ; ++i )
	{
		unit_id = variables[i]->get_value() / 100;
		++occurences[ unit_id ];
	}

	// If unit u has n occurences, its score will be 1 + 1/2 + 1/4 + ... + 1/(2^(n-1))
	// This is to favor balanced action occurences among units, rather than having
	// some units with a lot of different actions, and some with few of them.
	for( auto& unit : _set_units )
		if( occurences[ unit ] > 1 )
			score += arith_seq( occurences[ unit ] );
	
	return score;
}
