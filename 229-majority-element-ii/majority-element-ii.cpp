class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map <int,int> umap;
        int n = nums.size()/3;
        vector <int> result;
        for(auto i:nums){
            umap[i]++;
        }

        for(auto i:umap){   
            if(i.second > n){
                result.push_back(i.first);
            }
        }

        return result;
    }
};