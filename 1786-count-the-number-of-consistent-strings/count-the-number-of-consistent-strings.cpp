class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        int count = 0;
        set <char> allowed_set;
        for( char i:allowed){
            allowed_set.insert(i);
        }

        for(auto i: words){
            int flag = 1;
            for(auto j: i){
                if(allowed_set.find(j) == allowed_set.end()){
                    flag = 0;
                    break;
                }
            } 
            if(flag) count++;
        }
        return count;
    }
};