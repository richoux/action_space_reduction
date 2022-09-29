#pragma once

#include <vector>
#include <set>

#include <ghost/objective.hpp>

using ghost::Variable;
using ghost::Maximize;

double arith_seq( int n );

class Diversity : public Maximize
{
	std::set<int>	_set_units;
	
public:
	Diversity( const std::vector<Variable>& variables, const std::set<int>& set_units );
	double required_cost( const std::vector<Variable*>& variables ) const override;
};
