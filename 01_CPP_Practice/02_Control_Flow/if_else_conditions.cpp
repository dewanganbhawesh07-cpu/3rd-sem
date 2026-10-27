#include <iostream>

int main() {
    int num;
    std::cout << "Enter an integer: ";
    if (std::cin >> num) {
        if (num > 0) std::cout << num << " is positive.\n";
        else if (num < 0) std::cout << num << " is negative.\n";
        else std::cout << "The number is zero.\n";
    }
    return 0;
}
