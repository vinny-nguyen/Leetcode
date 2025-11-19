// https://leetcode.com/problems/keep-multiplying-found-values-by-two/
class Solution {
    // nums: array of integers
    // original: first integer needs to be searched for in nums
public:
    int findFinalValue(vector<int>& nums, int original) {
        int len = nums.size();
        while (find(nums.begin(), nums.end(), original) != nums.end()) {
            original *= 2;
        }
        return original;
    }
};
