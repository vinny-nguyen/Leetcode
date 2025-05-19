// https://leetcode.com/problems/valid-palindrome/

class Solution {
public:
    bool isPalindrome(string s) {
        string vincent;

        for (char c : s) {
            if (isalnum(c)) {
                vincent += tolower(c);
            }
        }

        int len = vincent.size();
        int left = 0;
        int right = len - 1;

        while (left < right) {
            if (vincent[left] != vincent[right]) {
                return false;
            }
            ++left;
            --right;
        }
        return true;
    }
};
