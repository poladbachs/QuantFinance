#include "pay_off_put.h"

// Constructor with single strike parameter
PayOffPut::PayOffPut(const double K) : K(K) {}

// Destructor (no need to use virtual keyword in source file)
PayOffPut::~PayOffPut() {}

// Overridden operator() method, which turns PayOffCall into a function object
double PayOffPut::operator()(const double S) const {
    return std::max(K - S, 0.0); // Standard European put pay-off
}