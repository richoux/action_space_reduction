#include <algorithm>
#include <ghost/global_constraints/all_different.hpp>

#include "builder_asr.hpp"
#include "all_have_action.hpp"
#include "objective_diversity.hpp"

BuilderASR::BuilderASR( int number_selection,
                        const std::vector<int>& vector_units_actions )
	: ModelBuilder( true ),
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
	create_n_variables( static_cast<int>( _vector_units_actions.size() ), _vector_units_actions );
	
	for( size_t i = 0; i < _vector_units_actions.size(); ++i )
		variables[i].set_value( _vector_units_actions[i] );
}

void BuilderASR::declare_constraints()
{
	// Permutation model, no need for AllDiff
	// constraints.emplace_back( std::make_shared<ghost::global_constraints::AllDifferent>( variables ) );
	constraints.emplace_back( std::make_shared<AllHaveAction>( variables, _set_units, _number_selection ) );
}

void BuilderASR::declare_objective()
{
	objective = std::make_shared<Diversity>( variables, _set_units, _number_selection );
}
