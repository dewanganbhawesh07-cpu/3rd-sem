#include <iostream>

class Animal {
public:
    void eat() { std::cout << "Animal is eating.\n"; }
};

class Dog : public Animal {
public:
    void bark() { std::cout << "Dog is barking.\n"; }
};

int main() {
    Dog d;
    d.eat();  // Inherited
    d.bark();
    return 0;
}
