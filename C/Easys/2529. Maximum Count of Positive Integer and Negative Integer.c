// March 12, 2025 Daily Leetcode Problem
// https://leetcode.com/problems/maximum-count-of-positive-integer-and-negative-integer/description/

int maximumCount(int* nums, int numsSize) {
    int pos = 0;
    int neg = 0;

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] > 0) {
            ++pos;
        } else if (nums[i] < 0) {
            ++neg;
        } else {
            continue;
        }
    }

    if (pos > neg) {
        return pos;
    } else if (pos < neg) {
        return neg;
    } else {
        return pos;
    }
}
