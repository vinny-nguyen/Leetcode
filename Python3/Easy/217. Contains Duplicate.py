# https://leetcode.com/problems/contains-duplicate/
class Solution(object):
    def containsDuplicate(self, nums):
        return len(nums) != len(set(nums))
        """
        :type nums: List[int]
        :rtype: bool
        """
        
