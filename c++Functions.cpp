#include <iostream>

int square(int number) {
    return number * number;
}

int main() {
    int value;

    std::cout << "Enter a number: ";
    std::cin >> value;
    std::cout << "The square is " << square(value) << "\n";

    return 0;
}
