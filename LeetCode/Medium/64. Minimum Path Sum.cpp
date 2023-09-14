class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        vector<vector<int>> v (n,vector<int>(m,INT_MAX));
        v[0][0] = grid[0][0];
        for (int i=0;i<n;i++)
            for (int j=0;j<m;j++)
            {
                if (i > 0)
                    v[i][j] = min(v[i][j],grid[i][j] + v[i-1][j]);
                if (j > 0)
                    v[i][j] = min(v[i][j],grid[i][j] + v[i][j-1]);
            }
        return v[n-1][m-1];
    }
};