#ifndef VANILLA_OPTION_CPP
#define VANILLA_OPTION_CPP

#include "vanilla_option.h"

VanillaOption::VanillaOption() {}

VanillaOption::VanillaOption(double _K, double _r, double _T,
                  double _sigma, PayOff* _pay_off) :

    K(_K), r(_r), T(_T), sigma(_sigma), pay_off(_pay_off) {}

#endif