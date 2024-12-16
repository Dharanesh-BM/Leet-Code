class Solution {
public:
    int missingNumber(vector<int>& nums) {
        unordered_map <int,int> umap;

        for(auto i:nums){
            umap[i]=1;
        }

        for(int i = 0; i < nums.size(); i++){
            if(!umap[i+1]) return i+1;
        }

        return 0;
    }
};