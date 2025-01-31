class Solution {
public:
    int lengthOfLastWord(string s) {
        vector<int> sizes;
        int temp = 0;
        for(auto i: s){
            if((i >= 'a' && i <= 'z') || (i >= 'A' && i <= 'Z')){
                temp++;
            }else{
                if(temp) sizes.push_back(temp);
                temp=0;
            }
        }
        if(temp) return temp;
        return sizes.back();
    }
};