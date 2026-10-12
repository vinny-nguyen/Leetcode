// https://leetcode.com/problems/find-triangular-sum-of-an-array/

public class Solution {
    public int TriangularSum(int[] nums) {
        int n = nums.Length;
        while (n != 1) 
        {
            int[] newNums = new int[n - 1];
            for (int i = 0; i < n - 1; ++i) 
            {
                newNums[i] = (nums[i] + nums[i + 1]) % 10;
            }

            for (int j = 0; j < n - 1; ++j) 
            {
                nums[j] = newNums[j];
            }
            n = newNums.Length;
        }
        return nums[0];
    }
}
