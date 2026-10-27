/**
 * Problem: Climbing Stairs (LeetCode #70)
 * Approach: Bottom-up DP with state space compression
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 */
#include <iostream>

int climbStairs(int n) {
    if (n <= 2) return n;
    int prev2 = 1, prev1 = 2;
    for (int i = 3; i <= n; ++i) {
        int current = prev1 + prev2;
        prev2 = prev1;
        prev1 = current;
    }
    return prev1;
}

int main() {
    int n = 5;
    std::cout << "Ways to climb " << n << " stairs: " << climbStairs(n) << "\n";
    return 0;
}
