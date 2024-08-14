#include "statistics.h" 
#include "correlated_snd.h"
#include <iostream> 
#include <vector>

int main(int argc , char **argv) {
    // Number of values
    int vals = 30;


    /* UNCORRELATED SND ∗/ 
    /* ================ */

    // Create the Standard Normal Distribution and random draw vectors
    StandardNormalDistribution snd; 
    std::vector<double> snd_uniform_draws(vals, 0.0);
    std::vector<double> snd_normal_draws(vals, 0.0);


    // Simple random number generation method based on RAND
    // We could be more sophisticated an use a LCG or Mersenne Twister 
    // but we’re trying to demonstrate correlation, not efficient
    // random number generation !
    for (int i=0; i<snd_uniform_draws.size(); i++) {
        snd_uniform_draws[i] = rand() / static_cast<double>(RAND_MAX);
    }

    // Create standard normal random draws
    snd.random_draws(snd_uniform_draws, snd_normal_draws);

}
