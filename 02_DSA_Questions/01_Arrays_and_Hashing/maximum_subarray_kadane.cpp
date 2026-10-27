/**
 * Problem: Maximum Subarray (Kadane's Algorithm - LeetCode #53)
 * Approach: Dynamic Programming / Kadane's single pass
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 */
#include <iostream>
#include <vector>
#include <algorithm>

int maxSubArray(const std::vector<int>& nums) {
    int currentSum = nums[0];
    int maxSum = nums[0];
    for (size_t i = 1; i < nums.size(); ++i) {
        currentSum = std::max(nums[i], currentSum + nums[i]);
        maxSum = std::max(maxSum, currentSum);
    }
    return maxSum;
}

int main() {
    std::vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    std::cout << "Maximum Subarray Sum: " << maxSubArray(nums) << "\n";
    return 0;
}
