#include <iostream>
#include <memory>

class Resource {
public:
    Resource() { std::cout << "Resource acquired\n"; }
    ~Resource() { std::cout << "Resource destroyed\n"; }
    void action() { std::cout << "Executing resource action\n"; }
};

int main() {
    std::unique_ptr<Resource> uPtr = std::make_unique<Resource>();
    uPtr->action();
    return 0;
}
