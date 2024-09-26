class Solution {
public:
    string reverseWords(string s) {
        vector<string> str;
        string temp="";

        for(int i=0;i<s.size();i++){
            if(s[i]!=' '){
                temp+=s[i];
            }
            if((s[i]!=' ' && s[i+1]==' ') || (i==s.size()-1 && s[i]!=' ')){
                str.push_back(temp);
                temp.clear();
            }
        }
        string result="";
        for(auto i:str){
            result = i + " " + result;
        }
        return result.substr(0,result.size()-1);
    }
};