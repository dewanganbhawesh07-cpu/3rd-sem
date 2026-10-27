/**
 * Problem: Valid Palindrome (LeetCode #125)
 * Approach: Two Pointers from start and end, alphanumeric filtering
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 */
#include <iostream>
#include <string>
#include <cctype>

bool isPalindrome(const std::string& s) {
    int left = 0, right = s.length() - 1;
    while (left < right) {
        while (left < right && !std::isalnum(s[left])) left++;
        while (left < right && !std::isalnum(s[right])) right--;
        if (std::tolower(s[left]) != std::tolower(s[right])) return false;
        left++;
        right--;
    }
    return true;
}

int main() {
    std::string s = "A man, a plan, a canal: Panama";
    std::cout << "Is \"" << s << "\" a palindrome? " << (isPalindrome(s) ? "true" : "false") << "\n";
    return 0;
}
