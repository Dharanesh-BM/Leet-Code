class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int size = s.length();
        // if(size%2 != 0) return false;
        // if(s.substr(0,size/2) == s.substr(size/2,size/2)) return true;
        // cout << "first" << s.substr(0,size/2) << endl;
        // cout << "second" << s.substr(size/2,size/2) << endl;

        for(int i = 0; i < size/2; i++){
            string repeated = "";
            for(int j = 0; j < size/(i+1); j++){
                repeated.append(s.substr(0,i+1));
            }
            // cout << repeated << endl;
            if(repeated == s) return true;
        }
        return false;
    }
};