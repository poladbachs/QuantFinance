#include <cmath> 
#include <iostream> 
#include <vector>

// Vectors a, b, c and d are const. They will not be modified 
// by the function. Vector f (the solution vector) is non−const 
// and thus will be calculated and updated by the function.

void thomas_algorithm(const std::vector<double>& a,
                      const std::vector<double>& b, 
                      const std::vector<double>& c, 
                      const std::vector<double>& d,
                      std::vector<double>& f) {
    size_t N = d.size();

    // Create the temporary vectors
    // Note that this is inefficient as it is possible to call 
    // this function many times. A better implementation would 
    // pass these temporary matrices by non−const reference to 
    // save excess allocation and deallocation
    std::vector<double> c_star(N, 0.0);
    std::vector<double> d_star(N, 0.0);

    // This updates the coefficients in the first row
    // Note that we should be checking for division by zero here
    c_star[0] = c[0] / b[0];
    d_star[0] = d[0] / b[0];

    // Create the c_star and d_star coefficients in the forward sweep
    for (int i=1; i<N; i++) {
        double m = 1.0 / (b[i] - a[i] * c_star[i-1]);
        c_star[i] = c[i] * m;
        d_star[i] = (d[i] - a[i] * d_star[i-1]) * m; 
    }

    // This is the reverse sweep, used to update the solution vector f
    for (int i=N-1; i--> 0; ) {
        f[i] = d_star[i] - c_star[i] * d[i+1]; 
    }

    

}