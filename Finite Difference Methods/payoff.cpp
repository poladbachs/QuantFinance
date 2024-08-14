#ifndef PAY_OFF_CPP
#define PAY_OFF_CPP

#include "payoff.h"

// ========== 
// PayOffCall 
// ==========

// Constructor with single strike parameter
PayOffCall::PayOffCall(const double& _K) { K = _K; }

// Destructor definition for PayOffCall
PayOffCall::~PayOffCall() {}

// Overridden operator() method, which turns PayOffCall into a function object
double PayOffCall::operator()(const double& S) const {
    return std::max(S - K, 0.0); // Standard European call pay-off
}

// ========= 
// PayOffPut 
// =========

// Constructor with single strike parameter
PayOffPut::PayOffPut(const double& _K) { K = _K; }

// Destructor definition for PayOffPut
PayOffPut::~PayOffPut() {}

// Overridden operator() method, which turns PayOffCall into a function object
double PayOffPut::operator() (const double& S) const {
    return std::max(K - S, 0.0); // Standard European put pay-off
}

#endif