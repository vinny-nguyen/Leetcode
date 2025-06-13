// https://leetcode.com/problems/maximum-difference-between-adjacent-elements-in-a-circular-array/

class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int len = nums.size();
        int max = 0;
        for (int i = 0; i < len - 1; ++i) {
            if (abs(nums[i] - nums[i + 1]) > max) {
                max = abs(nums[i] - nums[i + 1]);
            }
        }

        if (abs(nums[len - 1] - nums[0]) > max) {
            max = abs(nums[len - 1] - nums[0]);
        }

        return max;
    }
};
