class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int max_arr_len = 0;
        int temp = 0;
        for(int i = 0; i < nums.size(); i++){
            if(i+1 != nums.size() && nums[i] < nums[i+1]){
                temp++;
            } 
             else {
                max_arr_len = max(max_arr_len,temp);
                temp = 0;
            }
        }
        temp = 0;
        for(int i = 0; i < nums.size(); i++){
            if(i+1 != nums.size() && nums[i] > nums[i+1]){
                temp++;
            } else {
                max_arr_len = max(max_arr_len,temp);
                temp = 0;
            }
        }

        return max_arr_len+1;
    }
};