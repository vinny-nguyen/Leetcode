// https://leetcode.com/problems/rotate-image/

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        vector<vector<int>> copy(n, vector<int>(n));
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                copy[i][j] = matrix[i][j];
            }
        }

        int a = n - 1;
        int b = 0;
        int c = 0;

        while (b < n) {
            while (a > 0 || c < n) {
                matrix[b][c] = copy[a][b];
                ++c;
                --a;
            }
            a = n - 1;
            c = 0;
            ++b;
        }
    }
};
