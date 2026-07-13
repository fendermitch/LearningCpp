#include <iostream>

int main() {
    // The const keyword specifies that a variable's value is constant
    const double pi = 3.14159;
    double radius = 10;
    double circumference = 2 * pi * radius;

    std::cout << circumference << "cm" << '\n';

    return 0;
}