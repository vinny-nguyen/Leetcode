// https://leetcode.com/problems/reverse-linked-list/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode *vincent = NULL;

    while (head) {
        struct ListNode *temp = head->next;
        head->next = vincent;
        vincent = head;
        head = temp;
    }

    return vincent;
}
