class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        auto itr = nums.begin();
        auto itr_back = nums.end()-1;

        while(1){
            if(itr==nums.end() || itr==itr_back) break;
            if(*itr == 0){
                nums.erase(itr);
                nums.push_back(0);
                itr_back--;
            } else{
                itr++;
            }
            
        }
    }
};