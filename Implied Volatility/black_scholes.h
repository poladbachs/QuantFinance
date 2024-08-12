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

    // double operator() (double sigma) const;

    // This is the modified section. operator () 
    // has been replaced with option price and 
    // we have added option vega (both const) 
    double option_price(double sigma) const; 
    double option_vega(double sigma) const;
    
};
#endif