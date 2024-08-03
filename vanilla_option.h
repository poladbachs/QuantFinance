#ifndef VANILLA_OPTION_H
#define VANILLA_OPTION_H

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
    VanillaOption();                                // Default constructor − has no parameters
    VanillaOption(const double& K, const double& r,
                  const double& T, const double& S,
                  const double& sigma);             // Parameter constructor
    VanillaOption(const VanillaOption& rhs);        // Copy constructor
    VanillaOption& operator = (const VanillaOption& rhs); // Assignment operator
    virtual ~VanillaOption() ; // Destructor is virtual

    // Getter methods for our option parameters
    double getK () const;
    double getr() const;
    double getT() const;
    double getS() const;
    double getsigma() const;

    // Option price calculation methods
    double calc_call_price() const;
    double calc_put_price() const;
};

#endif