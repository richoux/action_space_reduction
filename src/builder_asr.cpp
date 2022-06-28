#include <ghost/global_constraints/all_different.hpp>

#include "builder_asr.hpp"
#include "all_have_action.hpp"

using ghost::global_constraints::AllDifferent;

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
	constraints.emplace_back( std::make_shared<AllDifferent>( variables ) );
	constraints.emplace_back( std::make_shared<AllHaveAction>( variables, _set_units ) );
}
