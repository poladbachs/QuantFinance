#include <iostream>

// Abstract base class
class BinaryOperation {
public:
    BinaryOperation() {};
    virtual double operator() (double left, double right) = 0;
};

class Add : public BinaryOperation {
public:
    Add() {};
    virtual double operator() (double left, double right) { return left + right; }
};

class Multiply : public BinaryOperation {
public:
    Multiply() {};
    virtual double operator() (double left, double right) { return left * right; }
};

double binary_op(double left, double right, BinaryOperation* bin_func) {
    return (*bin_func)(left, right);
}

int main() {
    double a = 5.0;
    double b = 10.0;

    BinaryOperation* pAdd = new Add();
    BinaryOperation* pMultiply = new Multiply();

    std::cout << "Add: " << binary_op(a, b, pAdd) << std::endl;
    std::cout << "Multiply: " << binary_op(a, b, pMultiply) << std::endl;

    delete pAdd;
    delete pMultiply;

    return 0;
}