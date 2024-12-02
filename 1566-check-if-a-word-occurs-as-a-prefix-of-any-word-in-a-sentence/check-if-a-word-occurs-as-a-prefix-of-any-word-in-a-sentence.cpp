class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        int index = 0;
        string str;
        stringstream s(sentence);
        while(s >> str){
            index++;
            if(str.substr(0,searchWord.length()) == searchWord) return index;
        }

        return -1;
    }
};