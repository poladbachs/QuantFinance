#ifndef INTERVAL_BISECTION_H
#define INTERVAL_BISECTION_H

#include <cmath>

// Creating a function template
// Trying to find an x such that |g(x) − y| < epsilon , 
// starting with the interval (m, n).
template<typename T>
double interval_bisection(double y_target, // Target y value
                          double m, // Left interval value
                          double n, // Right interval value
                          double epsilon, // Tolerance
                          T g) {        // Function object of type T, named g

    // Create the initial x mid−point value 
    // Find the mapped y value of g(x) 
    double x = 0.5 * (m + n);
    double y = g(x);

    
}

#endif