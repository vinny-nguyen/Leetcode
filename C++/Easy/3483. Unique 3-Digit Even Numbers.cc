// https://leetcode.com/problems/unique-3-digit-even-numbers/
class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        std::set<int> ans;
        for (int i = 0; i < digits.size(); ++i) {
            for (int j = 0; j < digits.size(); ++j) {
                for (int k = 0; k < digits.size(); ++k) {
                    int number = digits[i] * 100 + digits[j] * 10 + digits[k];
                    if (number % 2 == 0 && digits[i] != 0 && i != j && j != k && i!= k) {
                      ans.insert(number);
                    }
                }
            }
        }
        return ans.size();
    }
};
