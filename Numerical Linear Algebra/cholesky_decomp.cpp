#include <iostream> 
#include <Eigen/Dense>

int main() {
    typedef Eigen::Matrix<double, 4, 4> Matrix4x4;

    // Declare a 4x4 matrix with defined entries
    Matrix4x4 p;
    p << 6, 3, 4, 8,
         3, 6, 5, 1,
         4, 5, 10, 7,
         8, 1, 7, 25;
    std::cout << "Matrix P: \n" << p << std::endl << std::endl;

    Eigen::LLT<Matrix4x4> llt(p);
    
}