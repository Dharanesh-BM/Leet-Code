class Solution {
public:
    string reverseWords(string s) {
        stringstream str(s);
        stack <string> str_stack;

        while(str >> s){
            str_stack.push(s);
        }
        
        string result ="";

        while(!str_stack.empty()){
            result.append(str_stack.top());
            if(str_stack.size() > 1) result.append(" ");
            str_stack.pop();
        }

        return result;
    }
};