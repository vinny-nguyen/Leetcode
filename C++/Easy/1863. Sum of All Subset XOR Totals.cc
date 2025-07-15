// https://leetcode.com/problems/sum-of-all-subset-xor-totals/?envType=daily-question&envId=2025-04-05

#include <vector>

class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int numsSize = nums.size();
        int sum = 0;
        
        // "<<" or ">>": C++ bitwise shift operators 
        for (int i = 0; i < 1 << numsSize; ++i) {
            int lol = 0;
            for (int n = 0; n < numsSize; ++n) {
                if (i >> n & 1) {
                    lol ^= nums[n];
                }
            }
            sum += lol;
        }
        return sum;
    }
};
