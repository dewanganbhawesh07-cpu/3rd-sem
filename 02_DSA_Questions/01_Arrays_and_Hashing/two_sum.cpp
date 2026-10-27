/**
 * Problem: Two Sum (LeetCode #1)
 * Approach: Hash Map lookup for complement (target - nums[i])
 * Time Complexity: O(n)
 * Space Complexity: O(n)
 */
#include <iostream>
#include <vector>
#include <unordered_map>

std::vector<int> twoSum(const std::vector<int>& nums, int target) {
    std::unordered_map<int, int> seen;
    for (int i = 0; i < nums.size(); ++i) {
        int complement = target - nums[i];
        if (seen.find(complement) != seen.end()) {
            return {seen[complement], i};
        }
        seen[nums[i]] = i;
    }
    return {};
}

int main() {
    std::vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    std::vector<int> res = twoSum(nums, target);
    std::cout << "Two Sum indices for target " << target << ": [" << res[0] << ", " << res[1] << "]\n";
    return 0;
}
