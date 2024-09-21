class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int max = 0;
        for(auto s:sentences){
            if(max < count(s.begin(),s.end(),' ')+1){
                max = count(s.begin(),s.end(),' ')+1;
            }
        }

        return max;
    }
};