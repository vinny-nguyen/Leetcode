// https://leetcode.com/problems/insert-greatest-common-divisors-in-linked-list/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

 int gcd_lol(int a, int b) {
    while (b > 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
 }

void add_next(int i, struct ListNode *node) {
    struct ListNode *vincent = malloc(sizeof(struct ListNode));

    vincent->val = i;
    vincent->next = node->next;
    node->next = vincent;
}

struct ListNode* insertGreatestCommonDivisors(struct ListNode* head) {
    struct ListNode *curr = head;

    while (curr && curr->next) {
        int g = gcd_lol(curr->val, curr->next->val);
        add_next(g, curr);
        curr = curr->next->next;

    }
    return head;
}
