class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        values = {}

        for i in range(len(nums)):
            values[nums[i]] = i
        
        values = {i: values[i] for i in sorted(values)}
        
        for i in range(len(nums)):
            secondValue = target - nums[i]
            if secondValue in values and values[secondValue] != i:
                return [i,values[secondValue]]
                
        return []