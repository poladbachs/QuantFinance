#ifndef SIMPLE_MATRIX_HPP
#define SIMPLE_MATRIX_HPP

#include <vector> // Need this to store matrix values

template <typename Type = double> class SimpleMatrix {
private:
    std::vector<std::vector<Type> > mat; // Use a ”vector of vectors” to store the values

public:
    SimpleMatrix(); // Default Constructor

    // Constructor specifiying rows, columns and a default value
    SimpleMatrix(const int& rows, const int& columns, const Type& val);

    SimpleMatrix(const SimpleMatrix<Type>& _rhs); // Copy constructor

    // Assignment operator overloaded
    SimpleMatrix<Type>& operator = (const SimpleMatrix<Type>& _rhs);

    virtual ~SimpleMatrix(); // Destructor virtual

    // Access to the matrix values directly , via row and column indices
    std::vector<std::vector<Type> > get_mat() const;
    Type& value(const int& row, const int& col);
};

#endif