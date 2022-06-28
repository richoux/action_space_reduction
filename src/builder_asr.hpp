#pragma once

#include <vector>
#include <set>
#include <ghost/model_builder.hpp>

using ghost::ModelBuilder;

class BuilderASR : public ModelBuilder
{
	int _number_selection;
	std::set<int>	_set_units;
	std::vector<int> _vector_units_actions; // values of the form XXYY, with XX the unit ID and YY the action ID
	
public:
	BuilderASR(	int number_selection,
	            const std::vector<int>& vector_units_actions );

	void declare_variables() override;
	void declare_constraints() override;
};
