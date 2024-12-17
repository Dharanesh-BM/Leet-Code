class Solution {
public:
    int maxArea(vector<int>& height) {
        int start = 0;
        int end = height.size()-1;
        int maxArea = min(height[start],height[end])*abs(start-end); // calculating the area in first to last wall
        while(start < end){
            if(height[end] > height[start]){
                start++;
                maxArea = max(maxArea,min(height[start],height[end])*abs(start-end));
            } else {
                end--;
                maxArea = max(maxArea,min(height[start],height[end])*abs(start-end));
            }
        }

        return maxArea;
    }
};