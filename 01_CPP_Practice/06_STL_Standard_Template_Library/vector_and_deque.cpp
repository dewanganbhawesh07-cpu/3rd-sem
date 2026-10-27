#include <iostream>
#include <vector>
#include <deque>

int main() {
    std::vector<int> vec = {1, 2, 3, 4};
    vec.push_back(5);
    std::cout << "Vector elements: ";
    for (int x : vec) std::cout << x << " ";
    std::cout << "\n";

    std::deque<int> dq;
    dq.push_front(10);
    dq.push_back(20);
    std::cout << "Deque elements: ";
    for (int x : dq) std::cout << x << " ";
    std::cout << "\n";
    return 0;
}
