class Solution {
public:
    string reverseVowels(string s) {
        int front=0;
        int back = s.size()-1;
        unordered_map <char,int> vowels = {
                                    {'a',1},{'e',1},{'i',1},{'o',1},{'u',1},
                                    {'A',1},{'E',1},{'I',1},{'O',1},{'U',1}};

        while(1){
            if(vowels[s[front]] == 1 && vowels[s[back]] == 1){
                char temp = s[front];
                s[front] = s[back];
                s[back] = temp;
                front++; back--;
            }
            if(front >= back || front==back-1) break; 
            if(vowels[s[front]] == 1 && vowels[s[back]] != 1){
                back--;
            } 
            if(vowels[s[front]] != 1 && vowels[s[back]] == 1){
                front++;
            } 
            if(vowels[s[front]] != 1 && vowels[s[back]] != 1){
                front++; back--;
            }

        }

        return s;
    }
};