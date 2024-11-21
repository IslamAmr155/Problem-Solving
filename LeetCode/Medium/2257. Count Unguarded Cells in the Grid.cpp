class Solution {
public:
    int countUnguarded(int m, int n, vector<vector<int>>& guards, vector<vector<int>>& walls) {
        vector<vector<int>> v(m,vector<int>(n, 1));
        for (auto& w : walls) v[w[0]][w[1]] = 0;
        for (auto& g : guards) v[g[0]][g[1]] = 0;
        for (auto& g : guards) {
            int i = g[0], j = g[1];
            j++;
            while (j < n && v[i][j]) v[i][j++] = -1;
            j = g[1] - 1;
            while (j >= 0 && v[i][j]) v[i][j--] = -1;
            j = g[1], i = g[0] - 1;
            while (i >= 0 && v[i][j]) v[i--][j] = -1;
            i = g[0] + 1;
            while (i < m && v[i][j]) v[i++][j] = -1;
        }
        int ans = 0;
        for (int i = 0;i<m;i++)
            for (int j = 0;j<n;j++) ans += v[i][j] > 0 ? 1 : 0;
        return ans;
    }
};