class Solution {
public:
    int minCost(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        vector<vector<int>> c(m,vector<int>(n, INT_MAX));
        priority_queue<vector<int>, vector<vector<int>>, greater<>> q;
        vector<vector<int>> d = {{0, 1}, {0, -1}, {1,0}, {-1,0}};
        q.push({0, 0, 0});
        c[0][0] = 0;
        while (!q.empty()) {
            vector<int> v = q.top();
            q.pop();
            if (c[v[1]][v[2]] != v[0]) continue;
            for (int i = 0;i<4;i++) {
                int x = v[2] + d[i][1], y = v[1] + d[i][0];
                if (min(x, y) >= 0 && x < n && y < m) {
                    int w = v[0] + (i != (grid[v[1]][v[2]] - 1) ? 1 : 0);
                    if (c[y][x] > w) {
                        c[y][x] = w;
                        q.push({w, y, x});
                    }
                } 
            }
        }
        return c[m-1][n-1];
    }
};