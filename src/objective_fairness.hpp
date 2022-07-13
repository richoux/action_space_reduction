#pragma once

#include <vector>
#include <map>

#include <ghost/objective.hpp>

using ghost::Variable;
using ghost::Maximize;

class Fairness : public Maximize
{
	std::map<int,int> _last_iteration_usage;
	
public:
	Fairness( const std::vector<Variable>& variables, const std::map<int,int>& last_iteration_usage );
	double required_cost( const std::vector<Variable*>& variables ) const override;
};
