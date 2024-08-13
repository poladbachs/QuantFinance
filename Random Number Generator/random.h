#ifndef RANDOM_H
#define RANDOM_H

#include <vector>

class RandomNumberGenerator {
protected:
    unsigned long init_seed; // Initial random seed value
    unsigned long cur_seed; // Current random seed value
    unsigned long num_draws; // Dimensionality of the RNG

}

#endif
