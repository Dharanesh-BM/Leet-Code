class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int min = abs(nums[0]);
        int num = nums[0];
        unordered_map <int,int> umap;
        for(auto i:nums){
            umap[i];
        }

        for(auto i:nums){
            if(abs(i-0)<min){
                min = abs(i);
                num = i;
            } 
        }

        
        if(umap.find(abs(num))==umap.end()) return num;
        return abs(num);
    }
};