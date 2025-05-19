// https://leetcode.com/problems/two-sum/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int numsSize = nums.size();

        // vector<int>& nums: Acts as an array
        for (int i = 0; i < numsSize - 1; ++i) {
            for (int n = i + 1; n < numsSize; ++n) {
                if (nums[i] + nums[n] == target) {
                    nums[0] = i;
                    nums[1] = n;
                    return {i ,n};
                }
            }
        }
        return {};
    }
};
