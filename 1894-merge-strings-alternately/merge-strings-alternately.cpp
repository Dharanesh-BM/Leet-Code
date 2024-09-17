class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        
        string result;
        int i;
        for(i=0;i<word1.size() && i<word2.size();i++){
            result += word1.at(i);
            result += word2.at(i);
        }
        if(word1.size() > word2.size()){
            for(;i<word1.size();i++){
                result += word1.at(i);
            }
        } else {
            for(;i<word2.size();i++){
                result += word2.at(i);
            }
        }
        return result;
    }
};