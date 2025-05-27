// https://leetcode.com/problems/divisible-and-non-divisible-sums-difference

class Solution {
public:
    // n and m: postive integers
    // num1: sum of all int's in [1, n] NOT divisible by m
    // num2: sum of all int's in [1, n] divisible

    int differenceOfSums(int n, int m) {

        int num1 = 0;
        int num2 = 0;

        for (int i = 1; i <= n; ++i) {
            if (i % m != 0) {
                num1 += i;
            } else {
                num2 += i;
            }
        }

        return num1 - num2;
    }
};
