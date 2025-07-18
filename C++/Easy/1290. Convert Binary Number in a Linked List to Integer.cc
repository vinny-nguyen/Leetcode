// https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer/

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
    int getDecimalValue(ListNode* head) {
        std::string num;
        while (head) {
            num += std::to_string(head->val);
            head = head->next;
        }
        int vincent = std::stoi(num, nullptr, 2);
        return vincent;
    }
};
