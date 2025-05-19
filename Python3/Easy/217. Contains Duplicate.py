# https://leetcode.com/problems/contains-duplicate/description/

class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        seen = set()
        duplicates = []
        
        for num in nums:
            if num in seen:
                duplicates.append(num)
            else:
                seen.add(num)

        if len(duplicates) == 0:
            return False
        else:
            return True
        
