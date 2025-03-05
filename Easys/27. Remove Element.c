// https://leetcode.com/problems/remove-element/

int compare (const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int removeElement(int* nums, int numsSize, int val) {

    int expectedNnums[]; // sorted
    int count = 0;

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] == val) {
            count++;
            continue;
        }
    }

    for (int n = 0; n < numsSize - count; n++) {
        expectedNums[n] = nums[n];
    }

    int bruh = sizeof(expectedNuns) / sizeof(expectedNums[0]);
    qsort(expectedNums, bruh, sizeof(int), compare);

    // Counting k:
    int k = 0;
    while(expectedNums[k]) {
        k++;
    }
    return k;
}
