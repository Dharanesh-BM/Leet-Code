class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length()!=t.length()) return false;
        if(s.length()==1) return true;

        unordered_map <char,char> umap,s_umap;

        for(int i = 0; i < s.length() ; i++){
            if(!umap[s[i]] && !s_umap[t[i]]){
                umap[s[i]] = t[i];
                s_umap[t[i]]++;
            } else {
                if(umap[s[i]]!=t[i]) return false;
            }
        }

        return true;
    }
};