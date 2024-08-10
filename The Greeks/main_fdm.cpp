#include "black_scholes.h"

// This uses the forward difference approximation to calculate the Delta of a call option
double call_delta_fdm (const double S, const double K, 
                       const double r , const double v, 
                       const double T, const double delta_S) {
return (call_price(S + delta_S , K, r, v, T) - call_price(S, K, r, v, T))/ delta_S ;
}

// This uses the forward difference approximation to calculate the Vega of a call option
double call_vega_fdm (const double S, const double K, 
                       const double r , const double v, 
                       const double T, const double vega_S) {
return (call_price(S + vega_S , K, r, v, T) - call_price(S, K, r, v, T))/ vega_S ;
}

// This uses the forward difference approximation to calculate the Theta of a call option
double call_theta_fdm (const double S, const double K, 
                       const double r , const double v, 
                       const double T, const double theta_S) {
return (call_price(S + theta_S , K, r, v, T) - call_price(S, K, r, v, T))/ theta_S ;
}

// This uses the forward difference approximation to calculate the Rho of a call option
double call_rho_fdm (const double S, const double K, 
                       const double r , const double v, 
                       const double T, const double rho_S) {
return (call_price(S + rho_S , K, r, v, T) - call_price(S, K, r, v, T))/ rho_S ;
}

