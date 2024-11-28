class Solution {
public:
    int minimumObstacles(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        priority_queue <vector<int>, vector<vector<int>>, greater<vector<int>> > pq; 
        vector<vector<int>> v(m, vector<int>(n));
        vector<int> d = {0, -1, 0, 1, 0};
        pq.push({grid[0][0], 0, 0});
        while (!pq.empty()) {
            vector<int> u = pq.top();
            pq.pop();
            if (v[u[1]][u[2]]) continue;
            else v[u[1]][u[2]] = 1;
            if (u[1] == m-1 && u[2] == n-1) return u[0];
            for (int i = 0;i<4;i++) {
                int x = u[1] + d[i], y = u[2] + d[i+1];
                if (min(x,y) < 0 || x == m || y == n || v[x][y]) continue;
                pq.push({u[0] + grid[x][y], x, y});
            }
        }
        return 0;
    }
};