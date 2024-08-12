#ifndef NEWTON_RAPHSON_H 
#define NEWTON_RAPHSON_H

#include <cmath>

template<typename T,
    double (T::*g)(double) const,
    double (T::*g_prime)(double) const>
double newton_raphson(double y_target , // Target y value
                      double init , // Initial x value
                      double epsilo, // Tolerance
                      const T& root_func) { // Function object

    // Set the initial option prices and volatility
    double y = (root_func.*g)(init); // Initial option prices 
    double x = init ; // Initial volatility
}

#endif