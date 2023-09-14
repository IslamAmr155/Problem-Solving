class Solution {
public:
    int rec(int& n,int i,int j,vector<vector<int>>& matrix,vector<vector<int>>& dp)
    {
        if (i == n)
            return 0;
        if (dp[i][j] != INT_MAX)
            return dp[i][j];
        int b = INT_MAX , c = INT_MAX;
        int a = matrix[i][j] + rec(n,i+1,j,matrix,dp);
        if (j < n-1)
            b = matrix[i][j] + rec(n,i+1,j+1,matrix,dp);
        if (j > 0)
            c = matrix[i][j] + rec(n,i+1,j-1,matrix,dp);
        return dp[i][j] = min(a,min(b,c));
    }

    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        vector<vector<int>> dp(n,vector<int>(n,INT_MAX));
        int m = INT_MAX;
        for (int i=0;i<n;i++)
            m = min (m,rec(n,0,i,matrix,dp));
        return m;
    }
};