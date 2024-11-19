class Solution {
public:
    int strStr(string haystack, string needle) {
        if(haystack.size() < needle.size()) return -1;
        int sizeOfNeedle = needle.size();
        int i = 0;
        while(i<haystack.size()){
            if(haystack.substr(i,sizeOfNeedle) == needle) return i;
            i++;
        }
        return -1;
    }
};