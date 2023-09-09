class Solution {
public:
    vector<int> dp = vector<int> (21,-1);

    int rec(int n)
    {
        if (n == 0)
            return 1;
        if (dp[n] != -1)
            return dp[n];
        dp[n]  = 0;
        for (int i=0;i<n;i++)
            dp[n] += rec(i)*rec(n-1-i);
        return dp[n];  
    }

    int numTrees(int n) {
        return rec(n);
    }
};