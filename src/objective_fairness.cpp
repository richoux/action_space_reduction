#include "objective_fairness.hpp"

Fairness::Fairness( const std::vector<Variable>& variables, const std::map<int,int>& last_iteration_usage )
	: Maximize( variables, "Fairness" ),
	  _last_iteration_usage( last_iteration_usage )
{ }

double Fairness::required_cost( const std::vector<Variable*>& variables ) const
{
	double sum = 0.;

	for( const auto var : variables )
		sum += _last_iteration_usage.at( var->get_value() );

	return sum;
}
