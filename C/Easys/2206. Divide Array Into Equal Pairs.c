// https://leetcode.com/problems/divide-array-into-equal-pairs/
// March 17, 2025 Daily Leetcode
#include <stdlib.h>

// Comparison function
int compare (const void * elem1, const void * elem2) {
    int f = *((int*)elem1);
    int s = *((int*)elem2);
    if (f > s) return  1;
    if (f < s) return -1;
    return 0;
}

bool divideArray(int* nums, int numsSize) {

    qsort(nums, numsSize, sizeof(int), compare);
    int pairs = numsSize / 2;
    int numcount = 0;
    int paircount = 0;
    int temp = 0;

    for (int i = 0; i < numsSize; ++i) {
        numcount = 1;
        temp = nums[i];


        for (int n = i + 1; n < numsSize; ++n) {
            if (nums[n] == nums[i]) {
                ++numcount;
            }
        }

        if (numcount % 2 == 0) {
            ++paircount;
        }
    }

    if (paircount >= pairs) {
        return true;
    } else {
        return false;
    }
}
