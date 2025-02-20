class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int l = 0, r = nums.size()-1;
        while(l < r){
            if(nums[l] != 0){
                l++;
            } else{
                nums.erase(nums.begin()+l);
                nums.push_back(0);
            }
            if(nums[r] == 0){
                r--;
            }  
        }
    }
};