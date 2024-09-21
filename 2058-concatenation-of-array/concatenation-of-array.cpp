class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        ios_base::sync_with_stdio(0);

        vector <int> ans = nums;
        ans.insert(ans.end(),nums.begin(),nums.end());

        return ans;
    }
};