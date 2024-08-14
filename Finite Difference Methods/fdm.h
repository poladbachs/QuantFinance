#ifndef FDM_H
#define FDM_H

#include "pde.h" 

#include <vector>
// Finite Difference Method − Abstract Base Class 
class FDMBase {
protected: 
    ConvectionDiffusionPDE* pde;

    // Space discretisation
    double x_dom; // Spatial extent [0.0, x_dom]
    unsigned long J; // Number of spatial differencing points
    double dx; // Spatial step size (calculated from above)
    std::vector<double> x_values; // Stores the coordinates of the x dimension

    // Time discretisation
    double t_dom; // Temporal extent [0.0, t_dom]
    unsigned long N; // Number of temporal differencing points
    double dt; // Temporal step size (calculated from above)


};

#endif