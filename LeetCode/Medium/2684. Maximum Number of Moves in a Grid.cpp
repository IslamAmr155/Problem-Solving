class Solution {
public:
    vector<vector<int>> dp;
    int m, n;

    int rec(int i, int j, vector<vector<int>>& grid) {
        if (j == n-1) return 0;
        if (dp[i][j] != -1) return dp[i][j];
        dp[i][j] = 0;
        if (grid[i][j+1] > grid[i][j]) dp[i][j] = 1 + rec(i,j+1,grid);
        if (i > 0 && grid[i-1][j+1] > grid[i][j]) dp[i][j] = max(dp[i][j], 1 + rec(i-1,j+1,grid));
        if (i < m-1 && grid[i+1][j+1] > grid[i][j]) dp[i][j] = max(dp[i][j], 1 + rec(i+1,j+1,grid));
        return dp[i][j];
    }

    int maxMoves(vector<vector<int>>& grid) {
        m = grid.size(), n = grid[0].size();
        dp.resize(m, vector<int>(n,-1));
        int ans = 0;
        for (int i = 0;i<m;i++) ans = max(ans, rec(i,0,grid));
        return ans; 
    }
};