// https://leetcode.com/problems/longest-increasing-subsequence/

class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int len = nums.size();
        vector<int> dp(len, 1); // dynamic

        for (int i = 1; i < len; ++i) {
            for (int n = 0; n < i; ++n) {
                if (nums[i] > nums[n]) {
                    dp[i] = max(dp[i], dp[n] + 1);
                }
            }
        }
        return *max_element(dp.begin(), dp.end());
    }
};
