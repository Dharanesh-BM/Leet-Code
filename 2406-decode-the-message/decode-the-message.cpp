class Solution {
public:
    string decodeMessage(string key, string message) {
        unordered_map <char,char> alpha;
        int i = 0;

        for(auto c:key){
            if(!alpha[c] && c!=' ' &&c!='\n'){
                alpha[c]=('a'+i);
                i++;
            }
        }

        string str="";

        for(auto c:message){
            if(c==' '){
                str += ' ';
                continue;
            } 
            str+=alpha[c];
        }

        return str;
    }
};