#include <iostream>

#include "pay_off.h"
#include "option.h" 
#include "correlated_snd.h" 
#include "heston_mc.h"

void generate_normal_correlation_paths(double rho,
                                       std::vector<double>& spot_normals, 
                                       std::vector<double>& cor_normals ) {
    unsigned vals = spot_normals.size();
    
    // Create the Standard Normal Distribution and random draw vectors
    StandardNormalDistribution snd; 
    std::vector<double> snd_uniform_draws(vals, 0.0);

    // Simple random number generation method based on RAND
    for (int i=0; i<snd_uniform_draws.size(); i++) {
        snd_uniform_draws[i] = rand() / static_cast<double>(RAND_MAX);
    }

    // Create standard normal random draws
    snd.random_draws( snd_uniform_draws, spot_normals );

    // Create the correlated standard normal distribution
    CorrelatedSND csnd(rho, &spot_normals); 
    std::vector<double> csnd_uniform_draws(vals, 0.0);

    // Uniform generation for the correlated SND
    for (int i=0; i<csnd_uniform_draws.size(); i++) {
        csnd_uniform_draws[i] = rand() / static_cast<double>(RAND_MAX);
    }

    // Now create the −correlated− standard normal draw series
    csnd.random_draws(csnd_uniform_draws, cor_normals);