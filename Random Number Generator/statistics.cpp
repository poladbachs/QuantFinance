#ifndef STATISTICS_CPP 
#define STATISTICS_CPP

#define USE_MATH_DEFINES

#include "statistics.h"
#include <iostream>

StatisticalDistribution::StatisticalDistribution() {} 
StatisticalDistribution::~StatisticalDistribution() {}

// Constructor/destructor
StandardNormalDistribution::StandardNormalDistribution() {} 
StandardNormalDistribution::~StandardNormalDistribution() {}


// Probability density function
double StandardNormalDistribution::pdf(const double& x) const {
    return (1.0/sqrt(2.0 * M_PI)) * exp(-0.5*x*x);
}




#endif