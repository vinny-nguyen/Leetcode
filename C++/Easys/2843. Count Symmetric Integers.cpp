https://leetcode.com/problems/count-symmetric-integers/description/

#include <math.h>

class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int count = 0;

        for (int num = low; num <= high; ++num) {
            std::string s = std::to_string(num); // string conversion
            int digits = s.size();
            
            if (digits % 2 == 0) { // even number
                int n = digits / 2;
                int sum1 = 0;
                int sum2 = 0;

                for (int i = 0; i < n; ++i) {
                    sum1 += s[i] - '0';
                    sum2 += s[n + i] - '0';
                }

                if (sum1 == sum2) {
                    ++count;
                }
            }
        }
        return count;
    }
};
