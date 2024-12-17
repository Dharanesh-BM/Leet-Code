class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = INT_MIN;
        int CurrentSum = 0;
        for(auto i:nums){
            CurrentSum += i;
            maxSum = max(maxSum,CurrentSum);
            CurrentSum = max(0,CurrentSum);
            // maxSum = max(maxSum,sum);
            cout << maxSum << " ";
        }

        return maxSum;
    }
};