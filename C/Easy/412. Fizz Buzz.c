// https://leetcode.com/problems/fizz-buzz/

/**
* Note: The returned array must be malloced, assume caller calls free().
*/
#include <assert.h>
#include <assert.h>
char** fizzBuzz(int n, int* returnSize) {
assert(1 <= n && n <= pow(10, 4));

*returnSize = n;
char **buzzin = (char **)malloc(n * sizeof(char *)); // allocating memory address for pointers storing strings

for (int i = 1; i <= n; i++) { // numbers i to n inclusive
    if (i % 3 == 0 && i % 5 == 0) {
        buzzin[i - 1] = "FizzBuzz"; // i - 1 because we started at i = 1

    } else if (i % 3 == 0 && i % 5 != 0) {
        buzzin[i - 1] = "Fizz";

    } else if (i % 3 != 0 && i % 5 == 0) {
        buzzin[i - 1] = "Buzz";

    } else {
        char *numstr = (char *)malloc(5 * sizeof(char)); // dynamically allocates memory for the num converted to the string (1 <= n <= 10000) so had to malloc 5 * sizeof(char) 

        sprintf(numstr, "%d", i); // Converts number to string
        buzzin[i - 1] = numstr;
    }
}
return buzzin;
}
