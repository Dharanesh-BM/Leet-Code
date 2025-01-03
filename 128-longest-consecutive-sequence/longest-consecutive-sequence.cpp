class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int left = 0, right = 0;
        int maxNum = 0;
        int duplicate = 0;

        int n = nums.size();

        while(right < n){
            if(right+1 < n && (nums[right] == nums[right+1]-1 || nums[right] == nums[right+1])){
                if(nums[right] == nums[right+1]){
                    duplicate++;
                }
                right++;
            } else{
                maxNum = max(maxNum,right-left+1-duplicate);
                duplicate = 0;
                right++;
                left = right;
            }
        }

        return maxNum;
    }
};