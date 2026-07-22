#include <iostream>

int main() {
    int limit;
    int total = 0;

    std::cout << "Enter a number: ";
    std::cin >> limit;

    for (int number = 1; number <= limit; number++) {
        total += number;
    }

    std::cout << "The total is " << total << "\n";

    return 0;
}
