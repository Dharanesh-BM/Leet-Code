class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        ios_base::sync_with_stdio(0);

        nums.insert(nums.end(),nums.begin(),nums.end());

        return nums;
    }
};