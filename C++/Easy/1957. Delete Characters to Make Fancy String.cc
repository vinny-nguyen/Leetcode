// https://leetcode.com/problems/delete-characters-to-make-fancy-string/

class Solution {
public:
    // Fancy string: String where no three consecutive characters are equal
    // s: Delete the minimum possible number of characters from s to make it fancy
    string makeFancyString(string s) {
        int i = 0;

        while (i < (int)s.size()) {
            int idx = 1;
            while (i + idx < (int)s.size() && s[i] == s[i + idx]) {
                ++idx;
            }

            if (idx >= 3) {
                s.erase(i + 2, idx - 2);
            } else {
                i += idx;
            }
        }
        return s;
    }
};
