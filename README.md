![Image](https://github.com/user-attachments/assets/29cc2164-c237-41e2-8638-6d2865639ef6)

# *C++ Library for Quantitative Finance*

QuantCpp is a high-performance, modular C++ library that implements advanced financial simulation techniques and numerical methods for option pricing and risk analysis. Each directory focuses on a core aspect of quantitative finance:

## Project Highlights

- **Multiple Option Models:**  
  Asian (arithmetic/geometric), European (Black–Scholes & Monte Carlo), and Jump Diffusion.

- **Finite Difference Methods (FDM)**  
  Numerically solves partial differential equations (PDEs) for option pricing, producing data that can be visualized in 3D; includes a Python script that generates a **3D surface plot** (below).

- **Implied Volatility & Greeks**  
  Employs iterative algorithms (bisection, Newton–Raphson) to solve for implied volatility, and computes risk sensitivities (delta, gamma, etc.) crucial for hedging and risk management.

- **Stochastic Volatility & Jump Diffusion**  
  Extends the standard pricing framework to more realistic scenarios, modeling random volatility (e.g., Heston model) and sudden price jumps.

- **Custom Matrix & RNG Libraries**  
  Demonstrates how to build fundamental numerical tools (matrix operations, random number generators) in C++, while leveraging the Eigen library for high-performance computations.

- **Numerical Linear Algebra**  
  Implements key decomposition algorithms (Cholesky, LU, QR, Thomas) that underpin complex pricing models and PDE solvers.

## Quick Visual
![Image](https://github.com/user-attachments/assets/a6085212-5ee3-4c52-86e9-a8278f8e9d02)

**Plot Explanation:**  
- **S (horizontal axis):** Underlying price (0 to 1). Higher S generally increases the option’s value.  
- **T−t (depth axis):** Remaining time to maturity. Longer time often means higher option value.  
- **C(S, t) (vertical axis):** Computed option price at each S and T−t. Color gradients show low (blue) to high (yellow) valuations.

## Why This Matters
- **Demonstrates Advanced C++ Proficiency:**  
  Implements complex algorithms (Monte Carlo, PDE solvers) using modern C++ practices (templates, efficient software design).
- **Exhibits Expertise in Numerical Methods:**  
  Integrates techniques such as finite differences, iterative solvers, and stochastic simulations to solve real-world finance problems.
- **Showcases High-Performance Computing Skills:**  
  Relies on the Eigen library and custom operations for large-scale, efficient numerical computations—demonstrating strong competence in computational algebra.
- **Highlights Comprehensive Quantitative Finance Knowledge:**  
  Covers option pricing, implied volatility, risk measurement (Greeks), and advanced models (stochastic volatility, jump diffusion), reflecting a broad proficiency in quantitative methods.
