class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector <pair<string,string>> result;

        for(auto i: strs){
            string s = i;
            sort(i.begin(),i.end());
            result.push_back({i,s});
        }

        sort(result.begin(),result.end());
        for(auto i:result){
            cout << i.first << " " << i.second << endl;
        }
        vector <string> ans_sub;
        vector <vector<string>> ans;

        ans_sub.push_back(result[0].second);

        for(int i = 1; i < result.size(); i++){
            if(result[i].first == result[i-1].first){
                ans_sub.push_back(result[i].second);
            } else {
                ans.push_back(ans_sub);
                ans_sub.clear();
                ans_sub.push_back(result[i].second);
            }
        }
        ans.push_back(ans_sub);

        return ans;
    }
};