// https://leetcode.com/problems/palindrome-number

public class Solution {
    // Comments:
    // - x: reads the same forward and backwards
    public bool IsPalindrome(int x) {
        if (x < 0) {
            return false;
        }

        long reverse = 0;
        int xx = x;

        while (x > 0) {
            reverse = (reverse * 10) + (x % 10);
            x /= 10;
        }

        return reverse == xx;
    }
}
