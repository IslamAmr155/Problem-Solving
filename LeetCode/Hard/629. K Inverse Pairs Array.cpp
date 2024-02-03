class Solution {
public:
    int kInversePairs(int n, int k) {
        int mod = 1e9+7;
        vector<vector<long long>> dp(1001,vector<long long>(1001));
        dp[0][0] = 1;
        for (int i=1;i<=n;i++)
            for (int j=0;j<=k;j++)
                for (int m = 0;m <= min(j,i-1);m++)
                {   
                    dp[i][j] += dp[i-1][j-m];
                    dp[i][j] %= mod;
                }
        return dp[n][k];
    }
};