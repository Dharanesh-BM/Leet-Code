class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        ios::sync_with_stdio(false);
        cin.tie(0);
        unordered_map <int,int> countNum;
        for(auto i: nums){
            countNum[i]++;
            if(countNum[i]>1) return true;
        }
        return false;
    }
};