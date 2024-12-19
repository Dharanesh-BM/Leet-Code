class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int maxCount = INT_MIN;
        unordered_map <int,int> umap;

        for(auto i: nums){
            umap[i]++;
            if(umap[i] > maxCount){
                maxCount = umap[i];
            }
        }

        return (maxCount > 1) ? true : false;
    }
};