class Solution {
public:
    vector<int> lexicalOrder(int n) {
        vector <int> values;
        vector <string> s_values;
        for(int i=1;i<=n;i++){
            s_values.push_back(to_string(i));
        }
        sort(s_values.begin(), s_values.end());

        for(auto i:s_values){
            values.push_back(stoi(i));
        }

        return values;
    }
};