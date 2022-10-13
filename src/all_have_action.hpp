#pragma once

#include <vector>
#include <set>
#include <map>

#include <ghost/variable.hpp>
#include <ghost/constraint.hpp>

using ghost::Variable;
using ghost::Constraint;

class AllHaveAction : public Constraint
{
	std::set<int>	_set_units;
	mutable std::map<int,int> _map_unit_coverage;
	int _number_selection;
	
	double required_error( const std::vector<Variable*>& variables ) const override;
	double optional_delta_error( const std::vector<Variable*>& variables,
	                             const std::vector<int>& indexes,
	                             const std::vector<int>& candidate_values )	const override;
	void conditional_update_data_structures( const std::vector<Variable*>& variables,
	                                         int index,
	                                         int new_value ) override; 	
	
public:
	AllHaveAction( const std::vector<Variable>& variables,
	               const std::set<int>& set_units,
	               int number_selection );
};

