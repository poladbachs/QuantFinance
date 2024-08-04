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
    T = rhs.getT();
    S = rhs.getS();
    sigma = rhs.getsigma();
}

VanillaOption::VanillaOption() { init(); } // Default Constructor

VanillaOption::VanillaOption(const double& _K, const double& _r,    // Parameter Constructor
                             const double& _T , const double& _S,
                             const double& _sigma) {

    K = _K;
    r = _r;
    T = _T;
    S = _S;
    sigma = _sigma;
}

VanillaOption::VanillaOption(const VanillaOption& rhs) { // Copy Constructor
    copy(rhs);
}

VanillaOption& VanillaOption::operator=(const VanillaOption& rhs) { // Assignment operator
    if (this == &rhs) return *this;
    copy(rhs);
    return *this;
}

VanillaOption::~VanillaOption() {
    // Empty, as the compiler does the work of cleaning up the simple types for us
}

// Public access for the strike price, K
double VanillaOption::getK() const { return K; }

// Public access for the interest rate, r
double VanillaOption::getr() const { return r; }

// Public access for the maturity time, T
double VanillaOption::getT() const { return T; }

// Public access for the underlying asset price, S
double VanillaOption::getS() const { return S; }

// Public access for the volatility of underlying asset, sigma
double VanillaOption::getsigma() const { return sigma; }

// Cumulative distribution function for the standard normal distribution
double VanillaOption::N(double x) const {
    return 0.5 * std::erfc(-x / std::sqrt(2));
}

double VanillaOption :: calc_call_price() const {
    double sigma_sqrt_T = sigma * sqrt(T);
    double d_1 = ( log(S/K) + (r + sigma * sigma * 0.5 ) * T ) / sigma_sqrt_T;
    double d_2 = d_1 - sigma_sqrt_T;
    return S * N(d_1) - K * exp(-r*T) * N(d_2);
}

double VanillaOption :: calc_put_price () const {
    double sigma_sqrt_T = sigma * sqrt(T);
    double d_1 = ( log(S/K) + (r + sigma * sigma * 0.5 ) * T ) / sigma_sqrt_T;
    double d_2 = d_1 - sigma_sqrt_T;
    return K * exp(-r*T) * N(-d_2) - S * N(-d_1);
}

#endif