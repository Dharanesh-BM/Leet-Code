class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int totalProfit = 0;
        for(int sell = 1; sell < prices.size(); sell++){
            totalProfit += max(0,prices[sell]-prices[sell-1]);
        }
        return totalProfit;
    }
};