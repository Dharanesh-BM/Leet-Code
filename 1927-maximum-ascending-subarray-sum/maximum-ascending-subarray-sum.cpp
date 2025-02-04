class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int max_sum = 0, sum = 0;
        int temp;
        for(int i = 0; i < nums.size(); i++){
            sum += nums[i];
            if(i+1 < nums.size() && nums[i+1] <= nums[i]){
                max_sum = max(max_sum,sum);
                sum = 0;
            } else{
                max_sum = max(max_sum,sum);
            }
        }
        return max_sum;
    }
};