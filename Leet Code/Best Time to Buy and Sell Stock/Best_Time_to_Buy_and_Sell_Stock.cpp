class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buyDay = prices[0], profit = 0;

        for(int i=0; i<prices.size(); i++){
            buyDay = min(buyDay, prices[i]);
            int curr = prices[i]-buyDay;
            
            profit = max(profit, curr);
        }
        return profit;
    }
};
