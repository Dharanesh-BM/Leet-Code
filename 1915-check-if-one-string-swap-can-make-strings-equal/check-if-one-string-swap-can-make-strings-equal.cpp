class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        unordered_map<char,int>s1_map,s2_map;
        if(s1==s2){
            return true;
        }
        int count = 0;
        for(int i = 0; i < s1.size(); i++){
            if(s1[i] != s2[i]){
                count++;
            }
            s1_map[s1[i]]++;
            s2_map[s2[i]]++;
        }
        if(count == 2 && s1_map == s2_map) return true;
        return false;
    }
};