class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        
        unordered_map <string,int> uncommon_words;
        vector <string> result;
        string word;
        stringstream ss1(s1);
        while(getline(ss1,word,' ')){
            uncommon_words[word]++;
        }

        stringstream ss2(s2);
        while(getline(ss2,word,' ')){
            uncommon_words[word]++;
        }

        for(auto i:uncommon_words){
            if(i.second == 1){
                result.push_back(i.first);
            }
        }

        return result;
    }
};