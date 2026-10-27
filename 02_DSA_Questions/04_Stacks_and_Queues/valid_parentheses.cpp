/**
 * Problem: Valid Parentheses (LeetCode #20)
 * Approach: Stack matching open against closing brackets
 * Time Complexity: O(n)
 * Space Complexity: O(n)
 */
#include <iostream>
#include <stack>
#include <string>

bool isValid(const std::string& s) {
    std::stack<char> st;
    for (char c : s) {
        if (c == '(' || c == '{' || c == '[') {
            st.push(c);
        } else {
            if (st.empty()) return false;
            char top = st.top();
            if ((c == ')' && top == '(') ||
                (c == '}' && top == '{') ||
                (c == ']' && top == '[')) {
                st.pop();
            } else {
                return false;
            }
        }
    }
    return st.empty();
}

int main() {
    std::cout << "isValid(\"()[]{}\"): " << (isValid("()[]{}") ? "true" : "false") << "\n";
    std::cout << "isValid(\"(]\"): " << (isValid("(]") ? "true" : "false") << "\n";
    return 0;
}
