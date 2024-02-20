class Solution {
public:
    vector<int> dp = vector<int>(1e4+1,-1);

    int numSquares(int n) {
        if (n == 0) return 0;
        if (dp[n] != -1) return dp[n];
        int i = 1, p = 1, m = INT_MAX;
        while (p<=n)
        {
            m = min(m,1+numSquares(n-p));
            i++;
            p=i*i;
        }
        return dp[n] = m;
    }
};