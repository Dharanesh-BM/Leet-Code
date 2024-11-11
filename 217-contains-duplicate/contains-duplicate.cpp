class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map <int,int> countNum;
        for(auto i: nums){
            countNum[i]++;
            if(countNum[i]>1) return true;
        }
        return false;
    }
};