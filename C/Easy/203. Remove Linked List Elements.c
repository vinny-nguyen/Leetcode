// https://leetcode.com/problems/remove-linked-list-elements

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* removeElements(struct ListNode* head, int val) {
    // assert(head);
    struct ListNode front;
    front.next = head;
    struct ListNode *curr = &front;

    while (curr->next) {
        if (curr->next->val == val) {
            struct ListNode *vincent = curr->next;
            curr->next = curr->next->next;
            free(vincent);

        } else {
            curr = curr->next;
        }
    }

    return front.next;
}
