class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        int temp = 0;

        for(auto i:nums){
            temp = temp ^ i;
        }

        return temp;
    }
};