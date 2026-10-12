// https://leetcode.com/problems/letter-combinations-of-a-phone-number/

class Solution {
    vector<string> mapping = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    vector<string> result;

public:

    void backtrack (const string& digits, int index, string& current) {
        if (index == digits.length()) {
            result.push_back(current);
            return;
        }

        int digit = digits[index] - '0';
        string letters = mapping[digit];

        for (char letter : letters) {
            current.push_back(letter);
            backtrack(digits, index + 1, current);
            current.pop_back();
        }
    }

    vector<string> letterCombinations(string digits) {
        string current = "";
        backtrack(digits, 0, current);
        return result;
    }
};
