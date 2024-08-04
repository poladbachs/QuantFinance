#ifndef PAYOFF_DOUBLE_DIGITAL_H
#define PAYOFF_DOUBLE_DIGITAL_H

#include "pay_off.h"

class PayOffDoubleDigital : public PayOff {
private:
    double U; // Upper strike price
    double D; // Lower strike price

public:
    PayOffDoubleDigital(const double U, const double D);
    virtual ~PayOffDoubleDigital();
    virtual double operator()(const double S) const;
};

#endif