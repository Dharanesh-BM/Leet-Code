class Solution:
    def minOperations(self, nums: List[int]) -> int:
        count = 0
        for i in range(len(nums)):
            if i+2 >= len(nums):
                break
            if nums[i]==1:
                continue
            
            nums[i],nums[i+1],nums[i+2] = not nums[i],not nums[i+1],not nums[i+2]
            count+=1
        
        if 0 in nums:
            return -1
        
        return count