// https://leetcode.com/problems/insert-greatest-common-divisors-in-linked-list/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:

    int gcd_lol(int a, int b) {
        while (b > 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

    void add_next(int val, struct ListNode *lnode) {
        ListNode *vincent = new ListNode(val); // new ListNode instead of struct ListNode
        vincent->next = lnode->next;
        lnode->next = vincent;
    }

    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode *curr = head; // don't have to call struct again

        while (curr && curr->next) {
            int gcd = gcd_lol(curr->val, curr->next->val);
            add_next(gcd, curr);
            curr = curr->next->next;
        }

        return head;
    }
};
