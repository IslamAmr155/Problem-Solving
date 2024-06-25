class Solution {
public:
    int findRotateSteps(string ring, string key) {
        int n = ring.size(), m = key.size();
        vector<vector<int>> dp(n+1,vector<int>(m+1));
        for (int i = key.size() - 1;i >= 0;i--) {
            for (int j = 0;j<ring.size();j++) {
                dp[j][i] = INT_MAX;
                for (int k = 0;k<ring.size();k++)
                    if (key[i] == ring[k])
                        dp[j][i] = min(dp[j][i], dp[k][i+1] + min(abs(k - j), n - abs(k - j)));
            }
        }
        return dp[0][0] + m;
    }
};