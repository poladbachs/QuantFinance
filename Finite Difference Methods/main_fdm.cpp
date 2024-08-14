#include "payoff.h"
#include "vanilla_option.h"
#include "pde.h"
#include "fdm.h"

int main(int argc , char **argv) { 
    // Create the option parameters 
    double K = 0.5; // Strike price
    double r = 0.05; // Risk-free rate (5%)
    double v = 0.2; // Volatility of the underlying (20%)
    double T = 1.00; // One year until expiry

    // FDM discretisation parameters
    double x_dom = 1.0; // Spot goes from [0.0 , 1.0] 
    unsigned long J = 20;
    double t_dom = T; // Time period as for the option 
    unsigned long N = 20;

    // Create the PayOff and Option objects
    PayOff* pay_off_call = new PayOffCall(K);
    VanillaOption* call_option = new VanillaOption(K, r, T, v, pay_off_call);
    
}