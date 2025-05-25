# https://leetcode.com/problems/length-of-last-word

class Solution:
    
    # s: string consisting of words and spaces --> return length of last word in s
    def lengthOfLastWord(self, s: str) -> int:
        end = len(s) - 1

        while end >= 0 and s[end] == ' ':
            end = end - 1
        start = end

        while start >= 0 and s[start] != ' ':
            start = start - 1

        return end - start
        
