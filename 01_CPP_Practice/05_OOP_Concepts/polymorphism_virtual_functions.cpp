#include <iostream>

class Shape {
public:
    virtual void draw() { std::cout << "Drawing generic shape\n"; }
    virtual ~Shape() = default;
};

class Circle : public Shape {
public:
    void draw() override { std::cout << "Drawing Circle (Runtime Polymorphism)\n"; }
};

int main() {
    Shape* s = new Circle();
    s->draw();
    delete s;
    return 0;
}
