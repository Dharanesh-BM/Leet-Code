class Solution {
public:
    int minAddToMakeValid(string s) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);

        stack <char> par;
        for(char i: s){
            if(par.size()==0) 
                par.push(i);
            else{
                if(par.top() == '('){
                    if(i==')') 
                        par.pop();
                    else 
                        par.push(i);
                } else{
                    par.push(i);
                }
            }
        }

        return par.size();
    }
};