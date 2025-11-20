// https://libeigen.gitlab.io/eigen/docs-nightly/group__TutorialMatrixArithmetic.html
/*
c--column
d--double
Vector3d -- 1,2,3
Vector3cd --
1
2
3
Matrix2d
Matrix2<complex<double>>
MatrixXd a(x row,y column)

*/

#include <iostream>
#include <eigen3/Eigen/Dense>
int main()
{
    Eigen::Matrix2d a;
    a << 1, 2,
        3, 4;
    Eigen::MatrixXd b(2, 2);
    b << 2, 3,
        1, 4;
    std::cout << "a+b=\n"
              << a + b << std::endl;
    std::cout << "a-b=\n"
              << a - b << std::endl;
    std::cout << "Doing a+=b;" << std::endl;
    a += b;
    std::cout << a << std::endl;
    Eigen::Vector3d v(1, 2, 3);
    Eigen::Vector3d w(1, 0, 0);
    std::cout << "hello\n"
              << -v + w - v << std::endl;
    // dot product, value of two vectors
    std::cout << "dot product\n"
              << v.dot(w) << std::endl;

    Eigen ::Matrix3f i, j;
    i << 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0;
    j << 2.0, 3.0, 1.0, 4.0, 6.0, 5.0, 9.0, 7.0, 8.0;
    std::cout << "3f matrix *\n"
              << i * j << std::endl;
    std::cout << "3f matrix +\n"
              << i + j << std::endl;
    std::cout << "3f matrix -\n"
              << i - j << std::endl;
    std::cout << "3f matrix * a number i*3\n"
              << i * 3 << std::endl;
    Eigen::Vector3cf h(1, 2, 3);
    std::cout << "3f matrix * a vector\n"
              << i * h << std::endl;
    std::cin.get();
}
