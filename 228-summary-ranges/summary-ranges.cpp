class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {

        vector<string> result;
        if(nums.size()==0) return result;
        int start = nums[0];
        for(int i = 0; i < nums.size()-1; i++){
            if(nums[i+1] != nums[i]+1){
                pushInArray(result,start,nums[i]);
                start = nums[i+1];
            }
        }
        pushInArray(result,start,nums[nums.size()-1]);
        return result;
    }

    void pushInArray(vector <string> &ans,int a,int b){
        if(a==b) ans.push_back(to_string(a));
        else ans.push_back(to_string(a)+"->"+to_string(b));
    }
};