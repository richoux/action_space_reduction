#pragma once

#include <vector>
#include <set>

#include <ghost/variable.hpp>
#include <ghost/constraint.hpp>

using ghost::Variable;
using ghost::Constraint;

class AllHaveAction : public Constraint
{
	std::set<int>	_set_units;
	
	double required_error( const std::vector<Variable*>& variables ) const override;
	
public:
	AllHaveAction( const std::vector<Variable>& variables, const std::set<int>& set_units );
};

