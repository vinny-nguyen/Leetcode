// https://leetcode.com/problems/type-of-triangle/

/*
Conditions:
- Equilateral: all 3 sides of equal length
- Isosceles: exactly 2 sides of equal length
- Scalene: all sides are of different lengths
- Invalid triangle: sum of 2 sides is greater than the third side for all cases
*/

class Solution {
public:
    string triangleType(vector<int>& nums) {
        if (nums[0] + nums[1] <= nums[2]
        || nums[0] + nums[2] <= nums[1]
        || nums[1] + nums[2] <= nums[0]) {
            return "none"; // invalid triangle case

        } else {
            if (nums[0] == nums[1] && nums[1] == nums[2]) {
                return "equilateral"; // all 3 sides equal
            } else if (nums[0] != nums[1] && nums[1] != nums[2] && nums[0] != nums[2]) {
                return "scalene"; // all 3 sides different
            } else {
                return "isosceles"; // else case
            }
        }
    }
};
