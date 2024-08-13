#ifndef RANDOM_H
#define RANDOM_H

#include <vector>

class RandomNumberGenerator {
protected:
    unsigned long init_seed; // Initial random seed value
    unsigned long cur_seed; // Current random seed value
    unsigned long num_draws; // Dimensionality of the RNG

public:
    RandomNumberGenerator(unsigned long _num_draws, unsigned long _init_seed)
        : num_draws(_num_draws), init_seed (_init_seed), cur_seed (_init_seed) {};
    virtual  ~RandomNumberGenerator() {};

    virtual unsigned long get_random_seed() const { return cur_seed; }
    virtual void set_random_seed (unsigned long _seed ) { cur_seed = _seed ; } 
    virtual void reset_random_seed() { cur_seed = init_seed; }
    virtual void set_num_draws(unsigned long _num_draws) { num_draws = _num_draws; }

    
};

#endif
