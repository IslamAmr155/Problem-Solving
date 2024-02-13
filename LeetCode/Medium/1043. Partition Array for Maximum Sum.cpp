class Solution {
public:
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        int s = arr.size();
        vector<int> dp(s+1,0);
        for (int i = s-1;i>=0;i--)
        {
            int m = INT_MIN, n = arr[i], len = 0;
            for (int j = i; j < min(s,i+k);j++)
            {
                len++;
                n = max(n,arr[j]);
                m = max(m,n*len + dp[j+1]);
            }
            dp[i]=m;
        }
        return dp[0];
    }
};