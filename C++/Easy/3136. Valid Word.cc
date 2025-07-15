// https://leetcode.com/problems/valid-word/

#include <string>
#include <algorithm>
#include <cctype> // For ::tolower()

class Solution {
public:
    // isValid:
    // - Minimum of 3 characters
    // - Contains only digits (0 - 9) & English letters (Aa - Zz, @, #, $)
    // - Atleast one vowel
    // - Atleast one consonant

    bool isValid(string word) {
        bool vowel = false;
        bool consonant = false;

        std::transform(word.begin(), word.end(), word.begin(), ::tolower);

        if (word.length() < 3) return false;
        for (char c : word) {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' && (c < 48 || c > 57)) { vowel = true; }
            if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' && (c < 48 || c > 57)) { consonant = true; }
            if ((c < 48 || c > 57) && (c < 97 || c > 122)) { return false; }
        }

        if (vowel == false) return false;
        if (consonant == false) return false;
        return true;
    }
};
