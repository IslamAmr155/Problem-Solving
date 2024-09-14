class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size(), ans = 0;
        for (int i=0;i<m;i++)
            if (!grid[i][0])
                for (int j = 0;j<n;j++) grid[i][j] ^= 1;
        for (int i = 1;i<n;i++) {
            int c = 0;
            for (int j = 0;j<m;j++) c += grid[j][i];
            if (c <= m/2) 
                for (int j = 0;j<m;j++) grid[j][i] ^= 1;
        }
        for (auto v : grid) {
            int p = 1, c = 0;
            for (int i = n - 1;i>=0;i--) {
                c += p*v[i];
                p*=2;
            }
            ans += c;
        }
        return ans;
    }
};