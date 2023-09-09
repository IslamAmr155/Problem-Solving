class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int least = INT_MAX;
        int maxprofit = INT_MIN;
        int profit = 0;
        for (int i=0;i<prices.size();i++)
        {
            if (prices[i] < least)
                least = prices[i];
            profit = prices[i] - least;
            maxprofit = max(maxprofit, profit);
        }
        return maxprofit;
    }
};