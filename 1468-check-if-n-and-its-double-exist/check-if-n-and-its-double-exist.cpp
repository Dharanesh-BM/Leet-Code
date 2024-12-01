class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_map <int,int> umap;

        for(auto i:arr){
            umap[i]++;
        }

        for(auto i:umap){
            if(umap.contains(i.first*2) && (umap.find(i.first) != umap.find(i.first*2) || umap.find(i.first)->second > 1)){
                return true;
            } 
        } 
        return false;
    }
};