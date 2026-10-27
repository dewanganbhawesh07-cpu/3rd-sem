#include <iostream>

int main() {
    int n = 5;
    int* dynamicArr = new int[n];
    for (int i = 0; i < n; ++i) dynamicArr[i] = (i + 1) * 10;
    
    std::cout << "Dynamic array values: ";
    for (int i = 0; i < n; ++i) std::cout << dynamicArr[i] << " ";
    std::cout << "\n";

    delete[] dynamicArr; // Prevent memory leak
    dynamicArr = nullptr;
    return 0;
}
