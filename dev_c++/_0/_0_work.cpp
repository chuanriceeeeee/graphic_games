#include <iostream>
#include <eigen3/Eigen/Dense>
#include <cmath>

int main()
{
    float target_;
    target_ = 45.0f;
    double target_degree = target_ / 180.0 * acos(-1);
    Eigen::Matrix3d matrix_3d_rotate;
    double t_x = 1, t_y = 2;
    matrix_3d_rotate << std::cos(target_degree), -std::sin(target_degree), t_x,
        std::sin(target_degree), std::cos(target_degree), t_y,
        0.0, 0.0, 1.0;
    Eigen::Vector3cd p;
    p << 2.0,
        1.0,
        1.0;
    std::cout << "P rotate:" << matrix_3d_rotate * p << std::endl;
    Eigen::Matrix2d temp_;

    std::cin.get();
}