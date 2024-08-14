#ifndef PAY_OFF_HPP
#define PAY_OFF_HPP

#include <algorithm>

// Abstract base class for pay-off functions
class PayOff {
public:
    PayOff() {}; // Default constructor
    virtual ~PayOff() {}; // Virtual destructor

    // Overloaded operator() , turns the PayOff into an abstract function object
    virtual double operator() (const double S) const = 0; // Pure virtual method
};

class PayOffCall : public PayOff {
private:
    double K; // Strike price
public:
    PayOffCall(const double K); // No default constructor
    virtual ~PayOffCall(); // Destructor virtual for further inheritance

    // Virtual function is now over−ridden (not pure−virtual anymore)
    virtual double operator() (const double S) const; // Pay−off is max(S − K, 0)
};

class PayOffPut : public PayOff {
private:
    double K; // Strike price
public:
    PayOffPut(const double K_) {}; // No default constructor
    virtual ~PayOffPut() {}; // Destructor virtual for further inheritance

    // Overridden operator() method to calculate the put option pay-off
    virtual double operator() (const double S) const; // Pay−off is max(K − S, 0)
};

#endif