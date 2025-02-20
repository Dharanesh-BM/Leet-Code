class Solution:
    def maxArea(self, height: List[int]) -> int:
        l,r = 0,len(height)-1
        max_h = min(height[l],height[r]) * (r-l)
        print(max_h)
        while(l < r):
            if(height[l] < height[r]):
                l+=1
            else:
                r-=1
            max_h = max(max_h, min(height[l],height[r]) * (r-l))
        
        return max_h
            