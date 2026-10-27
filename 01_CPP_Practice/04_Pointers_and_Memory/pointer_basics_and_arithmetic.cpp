#include <iostream>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int* ptr = arr;
    std::cout << "Accessing array elements using pointer arithmetic:\n";
    for (int i = 0; i < 5; ++i) {
        std::cout << "*(ptr + " << i << ") = " << *(ptr + i) << "\n";
    }
    return 0;
}
