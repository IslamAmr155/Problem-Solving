class Solution {
public:
    int dfs(vector<vector<int>>& g, int i, int j) {
        vector<int> d = {0, 1, 0, -1, 0};
        int c = g[i][j];
        g[i][j] = 0;
        for (int k = 0;k<4;k++)
            if (min(i+d[k], j+d[k+1]) >= 0 && i+d[k] < g.size() && j+d[k+1] < g[0].size() &&
                g[i+d[k]][j+d[k+1]]) c += dfs(g, i+d[k], j+d[k+1]); 
        return c;
    }

    int findMaxFish(vector<vector<int>>& grid) {
        int ans = 0;
        for (int i = 0;i<grid.size();i++)
            for (int j = 0;j<grid[0].size();j++)
                if (grid[i][j]) ans = max(ans, dfs(grid, i, j));
        return ans;
    }
};