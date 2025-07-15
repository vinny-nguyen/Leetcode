// https://leetcode.com/problems/maximum-difference-between-even-and-odd-frequency-i/

class Solution {
public:
    int maxDifference(string s) {
        int odd = 0;
        int even = s.length() - 1;
        
        for (int i = 0; i < s.length(); ++i) {
            int count = std::ranges::count(s, s[i]);

            // Odd frequency:
            if (count % 2 != 0 && count > odd) {
                odd = count;

            // Even frequency:
            } else if (count % 2 == 0 && count < even) {
                even = count;
            }
        }
        return odd - even;
    }
};
