/**
 * Problem: Reverse Linked List (LeetCode #206)
 * Approach: Iterative 3-pointer reversal (prev, curr, next)
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 */
#include <iostream>

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode* reverseList(ListNode* head) {
    ListNode* prev = nullptr;
    ListNode* curr = head;
    while (curr != nullptr) {
        ListNode* nextTemp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextTemp;
    }
    return prev;
}

void printList(ListNode* head) {
    while (head != nullptr) {
        std::cout << head->val << (head->next ? " -> " : "\n");
        head = head->next;
    }
}

int main() {
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);

    std::cout << "Original list: ";
    printList(head);
    head = reverseList(head);
    std::cout << "Reversed list: ";
    printList(head);
    return 0;
}
