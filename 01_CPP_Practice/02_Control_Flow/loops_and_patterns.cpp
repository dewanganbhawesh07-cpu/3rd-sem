#include <iostream>

int main() {
    int rows = 5;
    std::cout << "Pyramid Pattern:\n";
    for (int i = 1; i <= rows; ++i) {
        for (int space = 1; space <= rows - i; ++space) std::cout << " ";
        for (int j = 1; j <= 2 * i - 1; ++j) std::cout << "*";
        std::cout << "\n";
    }
    return 0;
}
