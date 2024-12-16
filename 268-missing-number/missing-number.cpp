class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = (nums.size()*(nums.size()+1))/2;
        int givenSum = 0;

        for(auto i:nums){
            givenSum += i;
        }

        return sum-givenSum;

    }
};