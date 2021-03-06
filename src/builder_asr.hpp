#pragma once

#include <vector>
#include <set>
#include <map>
#include <ghost/model_builder.hpp>

using ghost::ModelBuilder;

class BuilderASR : public ModelBuilder
{
	int _number_selection;
	std::set<int>	_set_units;
	std::vector<int> _vector_units_actions; // values of the form XXYY, with XX the unit ID and YY the action ID
	std::map<int,int> _last_iteration_usage;
	
public:
	// optimization
	BuilderASR( int number_selection,
	            int current_iteration,
	            const std::vector<int>& vector_units_actions,
	            const std::map<int,int>& last_iteration_usage );

	// satisfaction
	BuilderASR( int number_selection,
	            const std::vector<int>& vector_units_actions );

	void declare_variables() override;
	void declare_constraints() override;
	// void declare_objective() override;
};
