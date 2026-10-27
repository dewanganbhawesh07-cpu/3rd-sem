#include <iostream>

void swapByRef(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 10, y = 20;
    std::cout << "Before swap: x=" << x << ", y=" << y << "\n";
    swapByRef(x, y);
    std::cout << "After swap: x=" << x << ", y=" << y << "\n";
    return 0;
}
