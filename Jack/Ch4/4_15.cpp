#include <iostream>
#include <iomanip>
int main() {
    //the value of floating-point often just the approximation of the true answer
    double d1 = 0.5, d2 = 0;
    std::cout << std::setprecision(16) << (d1 - d2) << '\n';
    d1 = 13.58;
    d2 = 13;
    std::cout << std::setprecision(16) << (d1 - d2) << '\n';
}