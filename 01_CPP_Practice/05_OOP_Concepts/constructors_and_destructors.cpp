#include <iostream>

class Box {
private:
    double length;
public:
    Box() : length(1.0) { std::cout << "Default Constructor called\n"; }
    Box(double l) : length(l) { std::cout << "Parameterized Constructor called with " << l << "\n"; }
    Box(const Box &b) : length(b.length) { std::cout << "Copy Constructor called\n"; }
    ~Box() { std::cout << "Destructor executed for length: " << length << "\n"; }
};

int main() {
    Box b1;
    Box b2(5.5);
    Box b3 = b2;
    return 0;
}
