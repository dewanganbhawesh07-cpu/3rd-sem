/**
 * Problem: Best Time to Buy and Sell Stock (LeetCode #121)
 * Approach: One-pass tracking minimum buying price and maximum profit
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 */
#include <iostream>
#include <vector>
#include <algorithm>

int maxProfit(const std::vector<int>& prices) {
    int minPrice = 1e9;
    int maxProfit = 0;
    for (int price : prices) {
        minPrice = std::min(minPrice, price);
        maxProfit = std::max(maxProfit, price - minPrice);
    }
    return maxProfit;
}

int main() {
    std::vector<int> prices = {7, 1, 5, 3, 6, 4};
    std::cout << "Maximum Profit: " << maxProfit(prices) << "\n";
    return 0;
}
