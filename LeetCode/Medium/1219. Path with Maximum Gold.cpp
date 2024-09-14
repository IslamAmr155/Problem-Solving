class Solution {
public:
    int ans = 0;

    int rec(vector<vector<int>>& g,int i,int j,vector<vector<bool>>& v) {
        if (i < 0 || i == g.size() || j < 0 || j == g[0].size() || !g[i][j] || v[i][j]) return 0;
        v[i][j] = 1;
        int sum = g[i][j] + max(max(max(rec(g,i,j-1,v),rec(g,i,j+1,v)),rec(g,i-1,j,v)),rec(g,i+1,j,v));
        ans = max(ans,sum);
        v[i][j] = 0;
        return sum;
    }

    int getMaximumGold(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        vector<vector<bool>> v(m,vector<bool>(n));
        for (int i = 0;i<m;i++)
            for (int j = 0;j<n;j++)
                rec(grid,i,j,v);
        return ans;
    }
};