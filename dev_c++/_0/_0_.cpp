// acos(-1)==pi
// acos(-1++)

#include <cmath>
#include <iostream>

int main()
{
    float a = 1;
    float b = 2;
    std::cout << a << std::endl;
    std::cout << a / b << std::endl;
    std::cout << std::sqrt(a) << std::endl;
    std::cout << std::acos(-1) << std::endl;
    std::cout << std::sin(30.0 / 180.0 * acos(-1)) << std::endl;
    std::cin.get();
}