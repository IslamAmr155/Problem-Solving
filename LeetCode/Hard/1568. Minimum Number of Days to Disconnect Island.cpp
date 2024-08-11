class Solution {
public:
    vector<vector<bool>> v;
    vector<vector<int>> d = {{0,1},{0,-1},{1,0},{-1,0}};
    void dfs(vector<vector<int>>& g, int i, int j) {
        v[i][j] = 1;
        for (int k = 0;k<4;k++) {
            int x = i + d[k][0], y = j + d[k][1];
            if (min(x,y) >= 0 && x < g.size() && y < g[0].size() && !v[x][y] && g[x][y]) dfs(g,x,y);
        }
    }

    int count(vector<vector<int>>& g) {
        int m = g.size(), n = g[0].size(), islands = 0;
        fill(v.begin(), v.end(), vector<bool>(n));
        for (int i = 0;i<m;i++)
            for (int j = 0;j<n;j++)
                if (g[i][j] && !v[i][j]) {
                    islands++;
                    dfs(g,i,j);
                }
        return islands;
    }

    int minDays(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size(), islands = 0;
        v.resize(m,vector<bool>(n));
        islands = count(grid);
        if (islands > 1 || islands == 0) return 0;
        for (int i = 0;i<m;i++)
            for (int j = 0;j<n;j++) {
                if (grid[i][j]) {
                    grid[i][j] = 0;
                    islands = count(grid);
                    grid[i][j] = 1;
                    if (islands > 1 || islands == 0) return 1;
                }
            }
        return 2;
    }
};