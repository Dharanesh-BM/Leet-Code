class Solution:
    def minOperations(self, nums: List[int], k: int) -> int:
        num = sorted(set(nums))
        if num[0] < k:
            return -1
        elif num[0] == k:
            return len(num)-1
        else:
            return len(num)