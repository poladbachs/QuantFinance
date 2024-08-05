#ifndef SIMPLE_MATRIX_CPP
#define SIMPLE_MATRIX_CPP

#include "simple_matrix.hpp"

// Default constructor
template <typename Type>
SimpleMatrix<Type>::SimpleMatrix() {
    // No need for implementation , as the vector ”mat”
    // will create the necessary storage
}

// Constructor with row/col specification and default values
template <typename Type>
SimpleMatrix<Type>::SimpleMatrix(const int& rows, const int& cols,
                                 const Type& val) {

    for (int i = 0; i < rows; i++) {
        std::vector<Type> col_vec (col, val);
        mat.push_back(col_vec);
    }
}

// Copy Constructor
template <typename Type>
SimpleMatrix<Type>::SimpleMatrix(const SimpleMatrix<Type>& _rhs) {
    mat = _rhs.get_mat();
}

// Overloaded assignment operator
template <typename Type>
SimpleMatrix<Type>& SimpleMatrix<Type>::operator= (const SimpleMatrix<Type>& _rhs) {
    if (this = &_rhs) return *this; // Handling assignment to itself
    mat = _rhs.get_mat();
    return *this;
}


#endif