class Solution {
public:
    vector<vector<int>> dp = vector<vector<int>>(201,vector<int>(201,INT_MAX));

    int rec(vector<vector<int>>& g, int i, int j) {
        if (i == g.size()) return 0;
        if (dp[i][j] != INT_MAX) return dp[i][j];
        for (int k = 0; k < g[0].size();k++) 
            if (k != j) 
                dp[i][j] = min(dp[i][j], g[i][j] + rec(g,i+1,k));
        return dp[i][j];
    }

    int minFallingPathSum(vector<vector<int>>& grid) {
        int ans = INT_MAX;
        for (int i = 0;i<grid[0].size();i++) ans = min(ans, rec(grid,0,i));
        return (ans != INT_MAX) ? ans : grid[0][0]; 
    }
};