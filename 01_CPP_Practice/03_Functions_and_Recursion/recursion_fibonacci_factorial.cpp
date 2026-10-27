#include <iostream>

long long factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

int fibonacci(int n) {
    if (n <= 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    std::cout << "Factorial of 6: " << factorial(6) << "\n";
    std::cout << "Fibonacci of 8: " << fibonacci(8) << "\n";
    return 0;
}
