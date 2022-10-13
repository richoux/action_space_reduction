#include <algorithm>
#include "all_have_action.hpp"

double AllHaveAction::required_error( const std::vector<Variable*>& variables ) const
{
	for( auto unit_id : _set_units )
		_map_unit_coverage[ unit_id ] = 0;

	for( const auto var: variables )
		++_map_unit_coverage[ var->get_value()/100 ];
	
	return std::count_if( _set_units.begin(),
	                      _set_units.end(),
	                      [&](const auto unit){ return _map_unit_coverage[unit] == 0; }	);
}

double AllHaveAction::optional_delta_error( const std::vector<Variable*>& variables,
                                            const std::vector<int>& indexes,
                                            const std::vector<int>& candidate_values )	const
{
	double error = 0.;
	
	if( ( indexes[0] < _number_selection && indexes[1] >= _number_selection )
	    ||
	    ( indexes[0] >= _number_selection && indexes[1] < _number_selection ) )
	{
		int unit_0 = variables[ indexes[0] ]->get_value() / 100;
		int candidate_unit_1 = candidate_values[1] / 100;
		if( _map_unit_coverage[ unit_0 ] == 1 )
			++error;
		if( _map_unit_coverage[ candidate_unit_1 ] == 0 )
			--error;
	}

	return error;
}

void AllHaveAction::conditional_update_data_structures( const std::vector<Variable*>& variables,
                                                        int index,
                                                        int new_value )
{
		int unit = variables[ index ]->get_value() / 100;
		int unit_new_value = new_value / 100;

		--_map_unit_coverage[ unit ];
		++_map_unit_coverage[ unit_new_value ];
}

AllHaveAction::AllHaveAction( const std::vector<Variable>& variables, 
                              const std::set<int>& set_units,
                              int number_selection )
	: Constraint( variables ),
	  _set_units( set_units ),
	  _number_selection( number_selection )
{}
