// https://leetcode.com/problems/maximum-difference-by-remapping-a-digit/

class Solution {
public:
    // num: integer
    // Bob remaps one of the 10 possible digist (from 0 to 9) to another digit
    // Returns the difference inbetween the maximum and minimum values
    // Bob can make by remapping exactly one digit in num
    int minMaxDifference(int num) {
        // maximum: replace first number with 9
        // minimum: replace first number with 0
        int first = 0;
        int max = 0;
        int min = 0;

        // Find the first non-9 digit:
        std::string s = std::to_string(num);
        int len = s.size();
        for (int n = 0; n < len; ++n) {
            if (s[n] != '9') {
                first = s[n];
                break;
            }
        }

        // Replace all occurrences of first number with 9:
        std::string s1 = std::to_string(num);
        int len1 = s1.size();
        for (int i = 0; i < len1; ++i) {
            if (s1[i] == first) {
                s1[i] = '9';
            }
        }
        max = std::stoi(s1);

        // Replace all occurrences of first number with 0:
        std::string s2 = std::to_string(num);
        int len2 = s2.size();
        for (int j = 0; j < len2; ++j) {
            if (s2[j] == s[0]) {
                s2[j] = '0';
            }
        }
        min = std::stoi(s2);
        return max - min;
    }
};
