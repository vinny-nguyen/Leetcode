// https://leetcode.com/problems/length-of-last-word

#include <string>

class Solution {
public:

    // s: consists of words and spaces --> returns length of last word in the string
    // word: maximal substring consisting of non space characters only
    
    int lengthOfLastWord(string s) {
        int end = s.length() - 1;
        
        while (end >= 0 && s[end] == ' ') {
            end--;
        }
        
        int start = end;
        while (start >= 0 && s[start] != ' ') {
            start--;
        }

        return end - start;

    }
};
