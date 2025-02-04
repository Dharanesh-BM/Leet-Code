class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        sort(nums.begin(),nums.end());
        for(int i = 0; i < nums.size(); i++){
            int l = i+1, r = nums.size()-1;
            while(l < r){
                int sum = nums[i] + nums[l] + nums[r];
                if(sum == 0){
                    result.push_back({nums[i],nums[l],nums[r]});
                    r--;l++;
                } else if(sum < 0){
                    l++;
                } else{
                    r--;
                }
            }
        }

        sort(result.begin(),result.end());
        auto it = unique(result.begin(),result.end());
        result.erase(it,result.end());
        return result;
    }

    // -4 -1 -1 0 1 2
};