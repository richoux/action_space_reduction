#include <algorithm>
#include <ghost/global_constraints/all_different.hpp>

#include "builder_asr.hpp"
#include "all_have_action.hpp"
#include "objective_fairness.hpp"

BuilderASR::BuilderASR( int number_selection,
                        int current_iteration,
                        const std::vector<int>& vector_units_actions,
                        const std::map<int,int>& last_iteration_usage )
	: ModelBuilder( false ),
	  _number_selection( number_selection ),
	  _vector_units_actions( vector_units_actions ),
	  _last_iteration_usage( last_iteration_usage )
{
	for( auto ua : _vector_units_actions )
	{
		// ua values have the form XXYY, with XX the unit ID and YY the action ID
		int unit_id = ua / 100;
		_set_units.insert( unit_id );
	}

	for( auto&[key, value] : _last_iteration_usage )
		value = current_iteration - value;
}

BuilderASR::BuilderASR( int number_selection,
                        const std::vector<int>& vector_units_actions )
	: ModelBuilder( false ),
	  _number_selection( number_selection ),
	  _vector_units_actions( vector_units_actions )
{
	for( auto ua : _vector_units_actions )
	{
		// ua values have the form XXYY, with XX the unit ID and YY the action ID
		int unit_id = ua / 100;
		_set_units.insert( unit_id );
	}
}

void BuilderASR::declare_variables()
{
	// Create variables
	create_n_variables( _number_selection, _vector_units_actions );
}

void BuilderASR::declare_constraints()
{
	constraints.emplace_back( std::make_shared<ghost::global_constraints::AllDifferent>( variables ) );
	//constraints.emplace_back( std::make_shared<AllHaveAction>( variables, _set_units ) );
}

// void BuilderASR::declare_objective()
// {
// 	objective = std::make_shared<Fairness>( variables, _last_iteration_usage );
// }
