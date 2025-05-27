class Solution:
    def differenceOfSums(self, n: int, m: int) -> int:
        num1 = 0
        num2 = 0

        for i in range(n + 1):
            if i % m != 0:
                num1 = num1 + i
            else:
                num2 = num2 + i
        
        return num1 - num2
        
