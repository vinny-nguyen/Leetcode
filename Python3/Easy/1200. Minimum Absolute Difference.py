# https://leetcode.com/problems/minimum-absolute-difference/

class Solution:
    # arr: Array of distinct integers
    # return: list of pairs in ascending order (a, b), where
    # - a and b are from arr
    # - a < b
    # - b - a = min_abs
    def minimumAbsDifference(self, arr: List[int]) -> List[List[int]]:

        arr = sorted(arr)
        min_abs = sys.maxsize
        for i in range(len(arr) - 1):
            if abs(arr[i + 1] - arr[i]) < min_abs:
                min_abs = abs(arr[i + 1] - arr[i])

        result = []

        for i in range(len(arr) - 1):
            a = arr[i]
            b = arr[i + 1]
            if (a < b) and (b - a == min_abs):
                pair = (a, b)
                result.append(pair)

        result_sorted = sorted(result)
        return result_sorted
