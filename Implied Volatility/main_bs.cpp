#ifndef MAIN_BS_CPP 
#define MAIN_BS_CPP

#include "black_scholes.h"
#include "interval_bisection.h"
#include <iostream>

int main(int argc , char **argv) {
    // First we create the parameter list
    double S = 100.0; // Underlying spot price
    double K = 100.0; // Strike price
    double r = 0.05; // Risk−free rate (5%)
    double T = 1.0; // One year until expiry
    double C_M = 10.5; // Option market price

    // Create black scholes call functor
    BlackScholesCall bsc(S, K, r , T);

}

#endif