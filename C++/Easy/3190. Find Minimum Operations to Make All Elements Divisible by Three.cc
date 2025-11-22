// https://leetcode.com/problems/find-minimum-operations-to-make-all-elements-divisible-by-three/

class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int len = nums.size();
        int ops = 0;
        for (int i = 0; i < len; ++i) {
            if ((nums[i] + 1) % 3 == 0 || (nums[i] - 1) % 3 == 0) {
                ++ops;
            }
        }
        return ops;
    }
};
