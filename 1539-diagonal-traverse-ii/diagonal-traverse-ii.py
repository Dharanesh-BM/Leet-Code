from collections import defaultdict

class Solution:
    def findDiagonalOrder(self, nums: List[List[int]]) -> List[int]:
        result = defaultdict(list)
        for i in range(len(nums)):
            for j in range(len(nums[i])):
                result[i+j].append(nums[i][j])

        ans = []
        for key in result.keys():
            for i in reversed(result[key]):
                ans.append(i)
        
        return ans