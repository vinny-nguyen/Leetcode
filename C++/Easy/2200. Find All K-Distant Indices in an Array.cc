// https://leetcode.com/problems/find-all-k-distant-indices-in-an-array/

class Solution {
public:
    // vector<int> &nums is passed by reference because passing by value, which means copying the entire vector, making it very expensive especially for large vectors.
    // nums: 0-indexed array
    // key: integer
    // k: integer
    // k-distant index: index i of nums for which there exists at least one index j such that abs(i - j) <= k and nums[j] == key.
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        int len = nums.size();
        vector<int> result;
        if (nums.empty()) {
            return result;
        }
        for (int i = 0; i < len; ++i) {
            for (int j = 0; j < len; ++j) {
                if (abs(i - j) <= k && nums[j] == key) {
                    result.push_back(i);
                    break;
                }
            }
        }
        return result;
    }
};
