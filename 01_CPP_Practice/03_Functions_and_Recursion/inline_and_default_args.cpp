#include <iostream>

inline int square(int x) { return x * x; }
void greet(std::string name, std::string prefix = "Hello") {
    std::cout << prefix << ", " << name << "!\n";
}

int main() {
    std::cout << "Square of 7: " << square(7) << "\n";
    greet("Bhawesh");
    greet("Bhawesh", "Welcome aboard");
    return 0;
}
