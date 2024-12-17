class Solution {
public:
    bool isPalindrome(string s) {
        string originalString = "";

        for(auto i:s){
            if(isalnum(i)){
                if(isupper(i)){
                    originalString += (char)tolower(i);
                } else{
                    originalString += i;
                }
            }
        }

        string reverseString = originalString;
        reverse(reverseString.begin(), reverseString.end());
        if(originalString == reverseString) return true;
        return false;
    }
};