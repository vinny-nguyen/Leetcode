// https://leetcode.com/problems/maximum-difference-between-increasing-elements/

class Solution {
public:
    // nums: 0 indexed array of size n
    // return: maximum difference between increasing elements in array
    // if d.n.e return -1
    int maximumDifference(vector<int>& nums) {
        int max = 0;
        int len = nums.size();
        bool exist = false;
        for (int i = 0; i < len; ++i) {
            for (int j = i; j < len; ++j) {
                if (nums[i] < nums[j] && nums[j] - nums[i] > max) {
                    max = nums[j] - nums[i];
                    exist = true;
                }
            }
        }
        if (exist == false) {
            return -1;
        } else {
            return max;
        }
    }
};
