class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        ios_base::sync_with_stdio(0);
        int max = 0,size = 0;
        int max_size = 0;

        for(int j = 0; j<nums.size();j++){
            if(max < nums[j]){
                max = nums[j];
            }
        }
        
        for(int j = 0; j<nums.size();j++){
            if(nums[j] == max){
                if(j+1 != nums.size() && nums[j]==nums[j+1]){
                    size++;
                } else {
                    size++;
                    if(max_size < size){
                        max_size = size;
                    }
                    size = 0;
                }
            }
        }

        return max_size;
    }
};