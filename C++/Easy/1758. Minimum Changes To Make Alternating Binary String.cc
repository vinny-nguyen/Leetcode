// https://leetcode.com/problems/minimum-changes-to-make-alternating-binary-string/

class Solution {
public:
    int minOperations(string s) {
        int min_ltr = 0;
        int min_rtl = 0;
        string ss = s;

        if (s[0] == '0') {
            s[0] = '1';
            ++min_ltr;
        }
        
        for (int i = 0; i < s.length(); ++i) {
            if (s[i] == '0' && s[i + 1] == '0') {
                s[i + 1] = '1';
                ++min_ltr;
            } else if (s[i] == '1' && s[i + 1] == '1') {
                s[i + 1] = '0';
                ++min_ltr;
            }
        }

        if (ss[0] == '1') {
            ss[0] = '0';
            ++min_rtl;
        }

        for (int j = 0; j < ss.length(); ++j) {
            if (ss[j] == '0' && ss[j + 1] == '0') {
                ss[j + 1] = '1';
                ++min_rtl;
            } else if (ss[j] == '1' && ss[j + 1] == '1') {
                ss[j + 1] = '0';
                ++min_rtl;
            }
        }

        if (min_ltr < min_rtl) return min_ltr;
        else return min_rtl;
    }
};
