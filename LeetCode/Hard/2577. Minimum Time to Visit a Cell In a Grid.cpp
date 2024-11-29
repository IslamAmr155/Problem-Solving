class Solution {
public:
    int minimumTime(vector<vector<int>>& grid) {
        if (grid[0][1] > 1 && grid[1][0] > 1) return -1;
        int m = grid.size(), n = grid[0].size();
        priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> pq;
        vector<vector<int>> v(m, vector<int>(n));
        vector<int> d = {0, -1, 0, 1, 0};
        pq.push({0, 0, 0});
        while (pq.size()) {
            vector<int> u = pq.top();
            pq.pop();
            if (u[1] == m - 1 && u[2] == n - 1) return u[0];
            if (v[u[1]][u[2]]) continue;
            v[u[1]][u[2]] = 1;
            for (int k = 0;k<4;k++) {
                int i = u[1] + d[k], j = u[2] + d[k+1];
                if (min(i,j) < 0 || i == m || j == n || v[i][j]) continue;
                int w = (grid[i][j] - u[0]) % 2 == 0, t = max(u[0]+1, grid[i][j] + w);
                pq.push({t, i, j});
            }
        }
        return -1;
    }
};