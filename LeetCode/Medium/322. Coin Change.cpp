class Solution {
public:
    vector<pair<long long,long long>> dp = vector<pair<long long,long long>> (10001,make_pair(-1,-1));

    long long rec(int amount,const vector<int>& coins)
    {
        if (dp[amount].first != -1)
            return dp[amount].first;
        long long coin = INT_MAX, rem = INT_MAX, a = 0, b = 0;
        for (int i=0;i<coins.size();i++)
        {
            if (amount - coins[i] >= 0)
            {
                a = 1 + rec(amount - coins[i],coins);
                b = dp[amount-coins[i]].second;
                if (b < rem)
                {
                    coin = a;
                    rem = b;
                }
                if (b == rem)
                    coin = min(coin,a);
            }
        }
        if (rem == 0)
        {
            dp[amount].first = coin;
            dp[amount].second = 0;
        }
        else
        {
            dp[amount].first =0;
            dp[amount].second = amount;
        }
        return dp[amount].first;
    }

    int coinChange(vector<int>& coins, int amount) {
        long long c = rec(amount,coins);
        if (dp[amount].second == 0)
            return dp[amount].first;
        else
            return -1;
    }
};