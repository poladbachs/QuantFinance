#ifndef STATISTICS_H 
#define STATISTICS_H

#include <cmath>
#include <vector>

class StatisticalDistribution {
public :
    StatisticalDistribution();
    virtual  ~StatisticalDistribution();

    // Distribution functions
    virtual double pdf(const double& x) const = 0; 
    virtual double cdf(const double& x) const = 0;

    // Inverse cumulative distribution functions (aka the quantile function)
    virtual double inv_cdf (const double& quantile) const = 0;

    // Descriptive stats
    virtual double mean() const = 0; 
    virtual double var() const = 0; 
    virtual double stdev() const = 0;

    // Obtain a sequence of random draws from this distribution
    virtual void random_draws(const std :: vector<double>& uniform_draws, 
                              std::vector<double>& dist_draws) = 0;
};

class StatisticalNormalDistribution : public StatisticalDistribution {
public :
    StatisticalNormalDistribution();
    virtual  ~StatisticalNormalDistribution();

    // Distribution functions
    virtual double pdf(const double& x) const; 
    virtual double cdf(const double& x) const;

    // Inverse cumulative distribution functions (aka the quantile function)
    virtual double inv_cdf(const double& quantile) const;

    // Descriptive stats
    virtual double mean() const; 
    virtual double var() const; 
    virtual double stdev() const;

    // Obtain a sequence of random draws from this distribution
    virtual void random_draws(const std :: vector<double>& uniform_draws, 
                              std::vector<double>& dist_draws);
};

#endif