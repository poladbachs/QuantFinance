#ifndef PATH_GENERATION_H 
#define PATH_GENERATION_H

#include <vector> 
#include <cmath>

// A simple implementation of the Box−Muller algorithm , used to generate
// gaussian random numbers − necessary for the Monte Carlo method below 
// Note that C++11 actually provides std :: normal distribution<> in
// the <random> library , which can be used instead of this function
double gaussian_box_muller () {
    double x = 0.0;
    double y = 0.0;
    double euclid_sq = 0.0;

    // Continue generating two uniform random variables 
    // until the square of their ”euclidean distance” 
    // is less than unity
    do {
        x = 2.0 * rand() / static_cast<double>(RAND_MAX)-1; 
        y = 2.0 * rand() / static_cast<double>(RAND_MAX)-1;
        euclid_sq = x*x + y*y;
    } while (euclid_sq >= 1.0);

    return x*sqrt(-2*log(euclid_sq)/euclid_sq);
}

// This provides a vector containing sampled points of a
// Geometric Brownian Motion stock price path
void calc_path_spot_prices(std::vector<double>& spot_prices , // Asset path
                           const double& r, // Risk free interest rate 
                           const double& v, // Volatility of underlying 
                           const double& T) { // Expiry

    // Since the drift and volatility of the asset are constant
    // we will precalculate as much as possible for maximum efficiency 
    double dt = T/static_cast<double>(spot_prices.size());
    double drift = exp(dt*(r-0.5*v*v));
    double vol = sqrt(v*v*dt);

    for (int i=1; i<spot_prices.size(); i++) { 
        double gauss_bm = gaussian_box_muller();
        spot_prices[i] = spot_prices[i-1] * drift * exp(vol*gauss_bm); }
    
}

#endif