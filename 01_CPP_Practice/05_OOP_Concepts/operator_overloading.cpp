#include <iostream>

class Complex {
private:
    double real, imag;
public:
    Complex(double r = 0, double i = 0) : real(r), imag(i) {}
    Complex operator+(const Complex &other) {
        return Complex(real + other.real, imag + other.imag);
    }
    void print() const { std::cout << real << " + " << imag << "i\n"; }
};

int main() {
    Complex c1(3.5, 2.5), c2(1.5, 4.5);
    Complex c3 = c1 + c2;
    std::cout << "Result of c1 + c2: ";
    c3.print();
    return 0;
}
