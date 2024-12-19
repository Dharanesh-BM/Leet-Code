class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map <char,int> umap;
        int palindromeLength = 0;

        for(auto i:s){
            umap[i]++;
        }

        bool flag = false;
        for(auto i:umap){
            if(i.second%2 == 1){
                i.second--;
                flag = true;
            }
            palindromeLength += i.second;
        }

        return (flag) ? palindromeLength+1 : palindromeLength;
    }
};