#ifndef PAY_OFF_H
#define PAY_OFF_H

#include <algorithm>

// Abstract base class for pay-off functions
class PayOff {
public:
    PayOff() {}; // Default constructor
    virtual ~PayOff() {}; // Virtual destructor

    // Overloaded operator() , turns the PayOff into an abstract function object
    virtual double operator() (const double S) const = 0; // Pure virtual method
};

#endif