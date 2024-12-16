class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        for(int i = 1; i <= k; i++){
            auto index = min_element(nums.begin(), nums.end()) - nums.begin();
            nums[index] = nums[index] * multiplier;
        }   

        return nums;
    }
};