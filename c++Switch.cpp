#include <iostream>

int main() {
    int choice;

    std::cout << "1. Start\n";
    std::cout << "2. Settings\n";
    std::cout << "3. Exit\n";
    std::cout << "Choose an option: ";
    std::cin >> choice;

    switch (choice) {
        case 1:
            std::cout << "Starting the program.\n";
            break;
        case 2:
            std::cout << "Opening settings.\n";
            break;
        case 3:
            std::cout << "Goodbye.\n";
            break;
        default:
            std::cout << "Invalid option.\n";
    }

    return 0;
}
