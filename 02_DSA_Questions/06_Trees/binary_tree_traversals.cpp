/**
 * Problem: Binary Tree Traversals & Depth
 * Approach: Inorder, Preorder, Postorder and Maximum Depth Recursion
 * Time Complexity: O(n)
 * Space Complexity: O(h) where h is tree height
 */
#include <iostream>
#include <algorithm>

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

int maxDepth(TreeNode* root) {
    if (!root) return 0;
    return 1 + std::max(maxDepth(root->left), maxDepth(root->right));
}

void inorder(TreeNode* root) {
    if (!root) return;
    inorder(root->left);
    std::cout << root->val << " ";
    inorder(root->right);
}

int main() {
    TreeNode* root = new TreeNode(3);
    root->left = new TreeNode(9);
    root->right = new TreeNode(20);
    root->right->left = new TreeNode(15);
    root->right->right = new TreeNode(7);

    std::cout << "Tree Inorder traversal: ";
    inorder(root);
    std::cout << "\nMaximum Tree Depth: " << maxDepth(root) << "\n";
    return 0;
}
