#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> nums = {42, 13, 89, 7, 24, 55};
    std::sort(nums.begin(), nums.end());
    std::cout << "Sorted vector: ";
    for (int n : nums) std::cout << n << " ";
    std::cout << "\n";

    bool found = std::binary_search(nums.begin(), nums.end(), 24);
    std::cout << "Binary search for 24: " << (found ? "Found" : "Not Found") << "\n";
    return 0;
}
