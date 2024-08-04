#ifndef VANILLA_OPTION_CPP 
#define VANILLA_OPTION_CPP

#include "vanilla_option.h"
#include <cmath>

// Initialises the member data
void VanillaOption::init() {
    K = 100.0;
    r = 0.05;   // 5% interest rate
    T = 1.0;    // One year until maturity
    S = 100.0;  // Option is ”at the money” as spot equals the strike .
    sigma = 0.2; // Volatility is 20%
}

// Copies the member data
void VanillaOption::copy(const VanillaOption& rhs) {
    K = rhs.getK();
    r = rhs.getr();
    T= rhs.getT();
    S = rhs.getS();
    sigma = rhs.getsigma();
}



#endif