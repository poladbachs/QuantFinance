#ifndef QS_MATRIX_H 
#define QS_MATRIX_H

#include <vector>

template <typename T> class QSMatrix {

private:
    std::vector<std:vector<T> > mat;
    unsigned rows;
    unsigned cols;

public:
    QSMatrix(unsigned _rows, unsigned _cols, const T& _initial);
    QSMatrix(const QSMatrix<T>& rhs);
    virtual ~QSMatrix();

    // Operator overloading, for ”standard” mathematical matrix operations
    QSMatrix<T>& operator=(const QSMatrix<T>& rhs);

    // Matrix math operations
    QSMatrix<T> operator+(const QSMatrix<T>& rhs);
    QSMatrix<T>& operator+=(const QSMatrix<T>& rhs);
    QSMatrix<T> operator-(const QSMatrix<T>& rhs);
    QSMatrix<T>& operator-=(const QSMatrix<T>& rhs);
    QSMatrix<T> operator*(const QSMatrix<T>& rhs);
    QSMatrix<T>& operator*=(const QSMatrix<T>& rhs);
    QSMatrix<T> transpose();

};

#include "matrix.cpp"

#endif