// https://leetcode.com/problems/divide-a-string-into-groups-of-size-k/

class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        if (s == "") return vector <string> ();

        vector <string> vincent;
        int len = s.length();
        int idx = 0;

        for (int i = 0; i < len; i += k) {
            string group = "";
            for (int j = 0; j < k; ++j) {
                if (i + j < len) group.push_back(s[i + j]);
                else group.push_back(fill);
            }
            vincent.push_back(group);
        }
        return vincent;
    }
};
