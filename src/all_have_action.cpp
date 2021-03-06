#include <algorithm>
#include "all_have_action.hpp"

double AllHaveAction::required_error( const std::vector<Variable*>& variables ) const
{
	double errors = 0.;

	for( auto unit_id : _set_units )
		if( std::find_if( variables.begin(), variables.end(),
		                  [unit_id](auto var){ return unit_id == ( var->get_value()/100 ); } ) == variables.end() )
			++errors;
	
	return errors;
	
	// std::set<int> set_units_copy( _set_units.size() );
	// std::copy( _set_units.begin(), _set_units.end(), set_units_copy.begin() );
	
	// for( auto var : variables )
	// {
	// 	var_id = var->get_value() / 100;
	// 	set_units_copy.extract( var_id );
	// }

	// return static_cast<double>( set_units_copy.size() );
}
	
AllHaveAction::AllHaveAction( const std::vector<Variable>& variables, const std::set<int>& set_units )
	: Constraint( variables ),
	  _set_units( set_units )
{ }
