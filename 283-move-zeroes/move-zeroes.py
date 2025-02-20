class Solution:
    def moveZeroes(self, nums: List[int]) -> None:
        l = 0
        r = len(nums)-1
        while(l < r):
            if(nums[l] != 0):
                l+=1
            else: 
                nums.pop(l)
                nums.append(0)
            if(nums[r] == 0):
                r-=1
        