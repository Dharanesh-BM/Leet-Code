class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0,buy=0;
        for(int sell = 1; sell < prices.size(); sell++){
            if(prices[buy] > prices[sell]){
                buy = sell;
            } else{
                if(maxProfit < prices[sell]-prices[buy]){
                    maxProfit = prices[sell]-prices[buy];
                }
            }

        }
        return maxProfit;
    }
};