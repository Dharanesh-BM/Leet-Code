class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int size = s.length();
        // if(size%2 != 0) return false;
        // if(s.substr(0,size/2) == s.substr(size/2,size/2)) return true;
        // cout << "first" << s.substr(0,size/2) << endl;
        // cout << "second" << s.substr(size/2,size/2) << endl;

        string repeated = "";
        for(int i = 0; i < size/2; i++){
            for(int j = 0; j < size/(i+1); j++){
                repeated.append(s.substr(0,i+1));
            }
            // cout << repeated << endl;
            if(repeated == s) return true;
            repeated.clear();
        }
        return false;
    }
};