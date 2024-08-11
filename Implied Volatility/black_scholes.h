#ifndef BLACK_SCHOLES_H 
#define BLACK_SCHOLES_H

class BlackScholesCall {
private:
    double S; // Underlying asset price
    double K; // Strike price
    double r; // Risk−free rate 
    double T; // Time to maturity
public :
    BlackScholesCall(double S , double K,
                    double r, double T);

    double operator() (double sigma) const;
};
#endif