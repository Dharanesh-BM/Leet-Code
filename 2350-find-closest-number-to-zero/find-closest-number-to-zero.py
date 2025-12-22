class Solution:
    def findClosestNumber(self, nums: List[int]) -> int:
        ans = nums[0]
        for i in nums:
            if(abs(ans) == i):
                ans = i
            elif(abs(i) < abs(ans)):
                ans = i
            
        return ans