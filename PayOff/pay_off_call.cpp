#include "pay_off_call.h"

// Constructor with single strike parameter
PayOffCall::PayOffCall(const double K) : K(K) {}

// Destructor (no need to use virtual keyword in source file)
PayOffCall::~PayOffCall() {}

// Overridden operator() method, which turns PayOffCall into a function object
double PayOffCall::operator()(const double S) const {
    return std::max(S - K, 0.0); // Standard European call pay-off
}