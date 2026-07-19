#include <iostream>
#include <vector>

using pairlist_t = std::vector<std::pair<std::string, int>>;
using text_t = std::string;
using number_t = int;
int main() {
    // The typedef keyword allows you to create an alias for a data type
    pairlist_t pairlist;
    text_t firstname = "Aarush";
    number_t age = 21;
    std::cout << firstname << '\n';
    std::cout << age << '\n';

    return 0;
}