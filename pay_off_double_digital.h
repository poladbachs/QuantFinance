#ifndef PAYOFF_DOUBLE_DIGITAL_H
#define PAYOFF_DOUBLE_DIGITAL_H

#include "pay_off.h"

class PayOffDoubleDigital : public PayOff {
private:
    double U; // Upper strike price
    double D; // Lower strike price

public:
    // Two strike parameters
    PayOffDoubleDigital(const double U, const double D);
    virtual ~PayOffDoubleDigital();

    // Pay−off is 1 if spot within strike barriers , 0 otherwise
    virtual double operator()(const double S) const;
};

#endif