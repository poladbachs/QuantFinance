#ifndef BLACK_SCHOLES_CPP 
#define BLACK_SCHOLES_CPP

#include "black_scholes.h" 
#include "bs_prices.h"

BlackScholesCall::BlackScholesCall(double _S, double _K,
                                   double _r, double _T) :
    S(_S), K(_K), r(_r), T(_T) {}

// Renamed from operator () to option price ()
double BlackScholesCall::option_price(double sigma) const {
    return call_price(S, K, r, sigma, T);
}

// New method added, which calls call vega
// to obtain the actual price
double BlackScholesCall::option_vega(double sigma) const {
    return call_vega(S, K, r, sigma, T);
}

#endif