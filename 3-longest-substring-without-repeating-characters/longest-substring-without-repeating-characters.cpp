class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        ios_base::sync_with_stdio(0);
        vector <char> stringChar;
        int size=0,max_size=0;
        for(char i:s){
            auto pos = find(stringChar.begin(),stringChar.end(),i);
            if(pos != stringChar.end()){
                if(max_size < stringChar.size()){
                    max_size = stringChar.size();
                }
                stringChar.erase(stringChar.begin(),pos+1);
            }
            stringChar.push_back(i);
        }
        if(max_size < stringChar.size()){
            max_size = stringChar.size();
        }
        return max_size;
    }
};