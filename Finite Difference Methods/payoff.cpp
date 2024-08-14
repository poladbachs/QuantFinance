#ifndef PAY_OFF_CPP
#define PAY_OFF_CPP

#include "payoff.h"

PayOff::PayOff() {}

// ========== 
// PayOffCall 
// ==========

// Constructor with single strike parameter
PayOffCall::PayOffCall(const double& _K) { K = _K; }

// Overridden operator() method, which turns PayOffCall into a function object
double PayOffCall::operator()(const double& S) const {
    return std::max(S - K, 0.0); // Standard European call pay-off
}


#endif