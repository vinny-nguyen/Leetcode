// https://leetcode.com/problems/minimum-number-of-operations-to-move-all-balls-to-each-box

class Solution {
public:
    // n: number of boxes
    // boxes: binary string of length n
    // boxes[i] = 0 --> ith box is empty
    // boxes[i] = 1 --> ith box has 1 ball

    // todo: move one ball from a box to an adjacent box
    // boxes[i] is adjacent to boxes[j] <-> abs(i - j) == 1
    vector<int> minOperations(string boxes) {
        int n = boxes.length();
        vector<int> answer(n, 0);

        for (int i = 0; i < n; ++i) {
            if (boxes[i] == '1') {
                for (int j = 0; j < n; ++j) {
                    answer[j] += abs(j - i);
                }
            }
        }
        return answer;
    }
};
