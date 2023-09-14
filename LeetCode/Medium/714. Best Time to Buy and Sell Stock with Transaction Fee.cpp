class Solution {
public:
    int maxProfit(vector<int> prices, int fee) 
    {
        int n = 0, m = INT_MIN;
        
        for (int price : prices) {
            int old = n;
            n = max(n, m + price);
            m = max(m, old - price - fee);
        }
            
        return n;
    }
};