#include "black_scholes.h"

// Pricing a European vanilla call option with a Monte Carlo method 
// Create three separate paths , each with either an increment , non− 
// increment or decrement based on delta S , the stock path parameter 
void monte_carlo_call_price (const int num_sims, const double S, 
                             const double K, const double r,
                             const double v, const double T, const double delta_S,
                             double& price_Sp , double& price_S , double& price_Sm) {
    // Since we wish to use the same Gaussian random draws for each path, it is
    // necessary to create three separated adjusted stock paths for each 
    // increment/decrement of the asset
    double Sp_adjust = (S+delta_S) * exp(T*(r-0.5*v*v));
    double S_adjust = S * exp(T*(r-0.5*v*v));
    double Sm_adjust = (S-delta_S) * exp(T*(r-0.5*v*v));

    // These will store all three ’current’ prices as the Monte Carlo // algorithm is carried out
    double Sp_cur = 0.0;
    double S_cur = 0.0;
    double Sm_cur = 0.0;

    // There are three separate pay−off sums for the final price 
    double payoff_sum_p = 0.0;
    double payoff_sum= 0.0;
    double payoff_sum_m = 0.0;

    for (int i = 0; i < num_sims; i++) {

        double gauss_bm = gaussian_box_muller();

        // Adjust three stock paths
        double expgauss = exp(sqrt(v*v*T)*gauss_bm) ; // Precalculate 
        Sp_cur = Sp_adjust * expgauss;
        S_cur = S_adjust * expgauss;
        Sm_cur = Sm_adjust * expgauss;

        // Calculate the continual pay−off sum for each increment/decrement
        payoff_sum_p += std::max(Sp_cur - K, 0.0);
        payoff_sum += std::max(S_cur - K, 0.0);
        payoff_sum_m += std::max(Sm_cur - K, 0.0);
    }

    price_Sp = (payoff_sum_p / static_cast<double>(num_sims)) * exp(-r*T);
    price_S = (payoff_sum / static_cast<double>(num_sims)) * exp(-r*T);
    price_Sm = (payoff_sum_m / static_cast<double>(num_sims)) * exp(-r*T);
}