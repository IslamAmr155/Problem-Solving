class Solution {
public:
    int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) {
        vector<vector<int>> g(n,vector<int>(n,INT_MAX));
        for (auto v : edges) {
            g[v[0]][v[1]] = v[2];
            g[v[1]][v[0]] = v[2];
        }
        for (int i = 0;i<n;i++) g[i][i] = 0;
        for (int k = 0;k<n;k++)
            for (int i = 0;i<n;i++)
                for (int j = 0;j<n;j++) 
                    if (g[i][k] != INT_MAX && g[k][j] != INT_MAX && g[i][j] > g[i][k] + g[k][j])
                        g[i][j] = g[i][k] + g[k][j];
        int ans = 0, c = 0, m = INT_MAX;
        for (int i = 0;i<n;i++) {
            c = 0;
            for (int j=0;j<n;j++)
                if (g[i][j] <= distanceThreshold) c++;
            if (c <= m) {
                m = c;
                ans = i;
            }
        }
        return ans;
    }
};