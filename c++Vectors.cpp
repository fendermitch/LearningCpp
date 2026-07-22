#include <iostream>
#include <vector>

int main() {
    std::vector<int> scores = {85, 92, 78, 96};
    int total = 0;

    for (int score : scores) {
        total += score;
        std::cout << score << "\n";
    }

    double average = static_cast<double>(total) / scores.size();
    std::cout << "Average: " << average << "\n";

    return 0;
}
