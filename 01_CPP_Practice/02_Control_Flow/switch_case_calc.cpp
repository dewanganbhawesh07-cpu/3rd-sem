#include <iostream>

int main() {
    char op;
    double a, b;
    std::cout << "Enter operator (+, -, *, /) and two numbers: ";
    if (std::cin >> op >> a >> b) {
        switch (op) {
            case '+': std::cout << "Result: " << (a + b) << "\n"; break;
            case '-': std::cout << "Result: " << (a - b) << "\n"; break;
            case '*': std::cout << "Result: " << (a * b) << "\n"; break;
            case '/': 
                if (b != 0) std::cout << "Result: " << (a / b) << "\n";
                else std::cout << "Error: Division by zero\n";
                break;
            default: std::cout << "Invalid operator\n";
        }
    }
    return 0;
}
