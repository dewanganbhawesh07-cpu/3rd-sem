/**
 * Problem: Valid Anagram (LeetCode #242)
 * Approach: Character Frequency Counting (26 lowercase English letters)
 * Time Complexity: O(n)
 * Space Complexity: O(1) - fixed 26 size array
 */
#include <iostream>
#include <string>
#include <vector>

bool isAnagram(const std::string& s, const std::string& t) {
    if (s.length() != t.length()) return false;
    std::vector<int> freq(26, 0);
    for (char c : s) freq[c - 'a']++;
    for (char c : t) {
        if (--freq[c - 'a'] < 0) return false;
    }
    return true;
}

int main() {
    std::cout << "Are 'anagram' and 'nagaram' anagrams? " << (isAnagram("anagram", "nagaram") ? "Yes" : "No") << "\n";
    return 0;
}
