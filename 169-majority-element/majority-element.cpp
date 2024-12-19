class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map <int,int> umap;
        for(auto i: nums){
            umap[i]++;
        }

        int max = INT_MIN;
        int key;
        for(auto i:umap){
            if(i.second > max){
                max = i.second;
                key = i.first;
            }
        }

        return key;
    }
};