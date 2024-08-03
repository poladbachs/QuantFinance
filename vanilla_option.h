#ifndef VANILLA OPTION H
#define VANILLA OPTION H

#endif

class VanillaOption {
private:
    void init();
    void copy(const VanillaOption& rhs);

    double K; // Strike price
    double r; // Risk-free(interest) rate
    double T; // Maturity(expiration) time
    double S; // Underlying asset price
    double sigma; // Volatility of underlying asset

public:

};