class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector <int> result;
        vector <pair<int,int>> values;

        for(int i = 0; i < nums.size(); i++){
            values.push_back({nums[i],i});
        }

        sort(values.begin(),values.end());

        int l = 0, r = nums.size()-1;

        while(l < r){
            if(values[l].first + values[r].first == target){
                return vector<int> {values[l].second,values[r].second};
            } else if( values[l].first + values[r].first > target){
                r--;
            } else {
                l++;
            }
        }

        return result;
    }
};