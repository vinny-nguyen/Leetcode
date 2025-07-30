// https://leetcode.com/problems/remove-duplicates-from-sorted-array/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int len = nums.size();
        int k = 1;

        if (nums.empty()) return 0;
        
        for (int i = 0; i < len; ++i) {
            if (nums[i] != nums[k - 1]) {
                nums[k] = nums[i];
                ++k;
            }
        }
        return k;
    }
};
