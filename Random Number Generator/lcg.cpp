#ifndef LINEAR CONGRUENTIAL GENERATOR CPP
#define LINEAR CONGRUENTIAL GENERATOR CPP

#include "lcg.h"

// Define the constants for the Park & Miller algorithm
const unsigned long a = 16807;      // 7ˆ5
const unsigned long m = 2147483647; // 2ˆ32 − 1

// Schrage ’s algorithm constants
const unsigned long q = 127773;
const unsigned long r = 2836;

// Parameter constructor
LinearCongruentialGenerator::LinearCongruentialGenerator(
    unsigned long num_draws,
    unsigned long init_seed) : RandomNumberGenerator(num_draws, init_seed)
{
    if (init_seed == 0)
    {
        init_seed = 1;
        cur_seed = 1;
    }
    max_multiplier = 1.0 / (1.0 + (m - 1));
}

#endif