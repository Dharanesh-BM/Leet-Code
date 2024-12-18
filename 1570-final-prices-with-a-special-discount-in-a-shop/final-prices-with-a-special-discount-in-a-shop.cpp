class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector <int> result;
        for(int i = 0; i < prices.size(); i++){
            for(int j = i+1; j < prices.size(); j++){
                if(prices[j] <= prices[i]){
                    result.push_back(prices[i]-prices[j]);
                    break;
                }
            }
            if(result.size() != i+1){
                result.push_back(prices[i]);
            }
        }

        return result;
    }
};