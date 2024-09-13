class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        ios_base::sync_with_stdio(0);
        vector<int> answer;
        int temp = -1;
        for(auto i:queries){
            temp = -1;
            for(int j=i[0];j<=i[1];j++){
                if(temp == -1) temp = arr[j];
                else temp = temp ^ arr[j];
            }
            answer.push_back(temp);
        }
        return answer;        
    }
};