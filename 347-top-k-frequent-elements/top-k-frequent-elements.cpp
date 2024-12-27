class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map <int,int> umap;

        for(auto i:nums){
            umap[i]++;
        }

        vector<pair<int,int>> result;
        for(auto i: umap){
            result.push_back({i.second,i.first});
        }

        sort(result.begin(),result.end(),greater<>());

        vector<int> ans;
        for(int i = 0; i < k; i++){
            ans.push_back(result[i].second);
        }

        return ans;
    }
};