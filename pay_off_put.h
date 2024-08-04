#ifndef PAY_OFF_PUT_H
#define PAY_OFF_PUT_H

#include "pay_off.h"

// Derived subclass for put option pay-off
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