#ifndef PAY_OFF_CALL_H
#define PAY_OFF_CALL_H

#include "pay_off.h"
#include <algorithm>

// Derived subclass for call option pay-off
class PayOffCall : public PayOff {
private:
    double K; // Strike price
public:
    PayOffCall(const double K_) {}; // No default constructor
    virtual ~PayOffCall() {}; // Destructor virtual for further inheritance

    // Virtual function is now over−ridden (not pure−virtual anymore)
    virtual double operator() (const double S) const; // Pay−off is max(S − K, 0)
};
#endif