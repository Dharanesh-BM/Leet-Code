class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        // ios_base::sync_with_stdio(0);
        int index = 0;
        string result;
        int start = 0;
        for(auto space: spaces){
            // s.insert(s.begin()+space+index,' ');
            result.append(s.begin()+start,s.begin()+space);
            result.append(" ");
            start = space;
            // index++;
        }
        result.append(s.begin()+start,s.end());
        return result;
    }
};