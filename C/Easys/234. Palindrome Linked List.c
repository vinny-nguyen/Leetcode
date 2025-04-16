// https://leetcode.com/problems/palindrome-linked-list/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode *reverse(struct ListNode *node) {
    struct ListNode *vincent = NULL;

    while (node) {
        struct ListNode *temp = node->next;
        node->next = vincent;
        vincent = node;
        node = temp;
    }
    
    return vincent;
}

bool isPalindrome(struct ListNode* head) {
    if (head == NULL || head->next == NULL) {
        return true;
    }

    struct ListNode *slow = head;
    struct ListNode *fast = head;

    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }

    if (fast) {
        slow = slow->next;
    }

    struct ListNode *second = reverse(slow);
    struct ListNode *first = head;

    while (second) {
        if (first->val != second->val) {
            return false;
        }
        first = first->next;
        second = second->next;
    }

    return true;
}
