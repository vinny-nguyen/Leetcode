/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

// https://leetcode.com/problems/two-sum/

#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {

    int *results;
    *returnSize = 2;
    results = (int *)malloc(sizeof(int) * 2); // dynamic memory allocating with returnSize
    
    for (int i = 0; i < numsSize - 1; i++) {
        for (int n = i + 1; n < numsSize; n++) {
            if (nums[i] + nums[n] == target) {
                results[0] = i;
                results[1] = n;
                // free(results); // deallocates results pointer on memory stack
                return results;
            }
        }
    }
    // free(results); // deallocates results pointer on memory stack
    return results;
}
