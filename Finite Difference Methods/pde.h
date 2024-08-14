#ifndef PDE_H
#define PDE_H

#include "vanilla_option.h"

// Convection Diffusion Equation − Second−order PDE 
class ConvectionDiffusionPDE {
public :
    // PDE Coefficients
    virtual double diff_coeff (double t , double x) const = 0; 
    virtual double conv_coeff (double t , double x) const = 0; 
    virtual double zero_coeff (double t , double x) const = 0; 
    virtual double source_coeff (double t , double x) const = 0;

    // Boundary and initial conditions
    virtual double boundary_left (double t , double x) const = 0; 
    virtual double boundary_right (double t , double x) const = 0;
    virtual double init_cond(double x) const = 0;
    
};

#endif