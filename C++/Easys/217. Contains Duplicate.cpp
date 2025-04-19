// https://leetcode.com/problems/contains-duplicate/

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // Using a hashset:
        
        std::unordered_set<int> seen;

        for (int num : nums) {
            if (seen.count(num)) {
                return true;
            }
            seen.insert(num);
        }

        return false;

        //int len = nums.size();

        // for (int i = 0; i < len - 1; ++i) {
        //     for (int n = i + 1; n < len; ++n) {
        //         if (nums[n] == nums[i]) {
        //             return true;
        //         }
        //     }
        // }
        // return false;
    }
};
