class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        values = []
        result = 0

        for i in s:
            if i in values:
                result = max(result,len(values))
                del values[:values.index(i)+1]
            values.append(i)
            
        return max(result,len(values))