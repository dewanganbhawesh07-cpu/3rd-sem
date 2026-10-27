#include <iostream>

int main() {
    double pi = 3.14159;
    int intPi = static_cast<int>(pi); // Modern C++ static_cast
    std::cout << "Original double: " << pi << "\n";
    std::cout << "Explicitly casted int: " << intPi << "\n";
    return 0;
}
