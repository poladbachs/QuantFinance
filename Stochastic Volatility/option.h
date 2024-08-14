#ifndef OPTION_H 
#define OPTION_H

#include "pay_off.h"

class Option { 
public:
    PayOff* pay_off ; 
    double K;
    double r;
    double T;
    Option (double K, double r,
            double T, PayOff* pay_off);
    virtual  ~Option(); 
};

#endif