#ifndef FDM CPP 
#define FDM CPP

#include <fstream> 
#include "fdm.h"

FDMBase::FDMBase(double _x_dom, unsigned long _J, 
                 double _t_dom, unsigned long _N,
                 ConvectionDiffusionPDE* _pde)
    : x_dom(_x_dom), J(_J), t_dom(_t_dom), N(_N), pde(_pde) {}

FDMEulerExplicit::FDMEulerExplicit(double _x_dom, unsigned long _J, 
                                   double _t_dom, unsigned long _N,
                                   ConvectionDiffusionPDE* _pde)
    : FDMBase(_x_dom, J, _t_dom, _N, _pde) {
        calculate_step_sizes();
        set_initial_conditions();
};


void FDMEulerExplicit::calculate_step_sizes () { 
    dx = x_dom/static_cast<double>(J-1);
    dt = t_dom/static_cast<double>(N-1);
}

void FDMEulerExplicit::set_initial_conditions () { 
    // Spatial settings
    double cur_spot = 0.0;

    old_result.resize(J, 0.0); 
    new_result.resize(J, 0.0); 
    x_values.resize(J, 0.0);

    for (unsigned long j=0; j<J; j++) {
        cur_spot = static_cast<double>(j)*dx;
        old_result[j] = pde->init_cond(cur_spot); 
        x_values[j] = cur_spot;
    }

    // Temporal settings
    prev_t = 0.0;
    cur_t=0.0;
}

#endif