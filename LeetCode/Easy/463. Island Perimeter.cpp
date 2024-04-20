class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size(), ans = 0, p = 0, c = 0;
        for (int i = 0;i<n;i++)
            for (int j = 0;j<m;j++)
            {
                if (grid[i][j])
                {
                    p++;
                    if (i != n-1 && grid[i+1][j]) c++;
                    if (j != m-1 && grid[i][j+1]) c++;
                }
            }
        return p*4 - 2*c;
    }
};