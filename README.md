# QuantCpp

Personal Workshop: C++ for Quantitative Finance and Trading
---
This project showcases a complete C++ workshop for Quantitative Finance and Trading, including implementations for options pricing, numerical methods, risk modeling, and more.

## Chapters Breakdown

### 1. Introduction to C++
- Explained the history and importance of C++ in quantitative analysis.
- Covered key programming paradigms: procedural, object-oriented, and generic programming.
- Introduced the Standard Template Library (STL) and Boost libraries.

### 2. Your First Quantitative Finance C++ Program
- Created a European vanilla option pricing program using object-oriented programming.
- Implemented class constructors, destructors, selectors, and modifiers.
- Explored passing by reference and value for performance optimization.

### 3. Option Pay-Off Hierarchies and Inheritance
- Implemented a hierarchy of option payoffs using inheritance.
- Built PayOffCall and PayOffDoubleDigital classes.
- Applied polymorphism with virtual destructors for handling diverse payoff structures.

### 4. Generic Programming and Template Classes
- Designed a generic matrix template class for handling different data types.
- Implemented mathematical operations for matrix algebra.
- Compared the efficiency of generic programming vs. object-oriented programming in quant finance.

### 5. Introduction to the Standard Template Library (STL)
- Implemented key STL components like sequence containers and associative containers.
- Utilized iterators and STL algorithms for efficient data manipulation.
- Explored advanced C++11 STL features to optimize code performance.

### 6. Function Objects
- Implemented functors (function objects) and demonstrated their advantage over function pointers.
- Enhanced code flexibility and efficiency in financial calculations by using functors.

### 7. Matrix Classes for Quantitative Finance
- Developed a custom matrix class library with support for mathematical operations.
- Integrated dynamic memory management for matrix allocation and deallocation.
- Used external matrix libraries like Eigen to handle large-scale matrix operations.

### 8. Numerical Linear Algebra
- Implemented LU, QR, and Cholesky decomposition algorithms for solving linear systems.
- Applied the Thomas algorithm for solving tridiagonal systems in financial models.
- Integrated these methods into C++ for efficient numerical solutions in finance.

### 9. European Options with Monte Carlo
- Built a Monte Carlo simulation to price European vanilla options.
- Implemented the Black-Scholes formula for option pricing as a benchmark.
- Incorporated risk-neutral pricing methods into the Monte Carlo framework.

### 10. Calculating the Greeks
- Implemented analytic formulae for option Greeks (Delta, Gamma, Vega).
- Applied finite difference methods (FDM) and Monte Carlo techniques to compute Greeks.
- Enhanced precision in Greek calculations using these numerical approaches.

### 11. Asian/Path-Dependent Options with Monte Carlo
- Designed Monte Carlo simulations for Asian and path-dependent options.
- Developed payoff classes to model various exotic option payoffs.
- Implemented path generation algorithms to simulate option price paths.

### 12. Implied Volatility
- Applied root-finding algorithms like Newton-Raphson and interval bisection to calculate implied volatility.
- Implemented implied volatility calculation via a C++ class with efficient numerical methods.

### 13. Random Number Generation and Statistical Distributions
- Developed a linear congruential generator (LCG) for generating random numbers.
- Implemented standard normal distribution functions for Monte Carlo simulations.
- Built a hierarchy of statistical distribution classes for use in financial modeling.

### 14. Jump-Diffusion Models
- Modeled jump-diffusion processes to price options with discontinuous asset price movements.
- Developed C++ code for calculating European option prices under jump-diffusion models.

### 15. Stochastic Volatility
- Implemented the Heston model for pricing options under stochastic volatility.
- Simulated correlated asset paths using Cholesky decomposition.
- Applied Euler discretization for generating paths in the Heston model.

### 16. Single Factor Black-Scholes with Finite Difference Methods
- Applied finite difference methods (FDM) to solve the Black-Scholes partial differential equation.
- Built a full FDM class to handle time-stepping and boundary conditions in option pricing.
- Benchmarked the results against analytic solutions for validation.
