class Solution {
public:
    bool isValid(string s) {
        vector <char> paranthesis{'.'};
        for(auto i:s){
            if(isOpen(i))
                paranthesis.push_back(i);
            else if(isClose(i,paranthesis.back())){
                paranthesis.pop_back();
            }
            else{
                return false;
            }
        }
        return paranthesis.size()==1;
    }

    bool isOpen(char element){
        if(element=='(' || element == '{' || element == '[')
            return true;
        return false;
    }

    bool isClose(char a,char b){
        if(a==')' && b=='(') return true;
        if(a==']' && b=='[') return true;
        if(a=='}' && b=='{') return true;
        return false;
    }
};