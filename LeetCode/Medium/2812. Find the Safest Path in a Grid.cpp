class Solution {
public:
    int maximumSafenessFactor(vector<vector<int>>& grid) {
        int n = grid.size();
        queue<pair<int,int>> q;
        for (int i = 0;i<n;i++)
            for (int j = 0;j<n;j++) 
                if (grid[i][j]) q.push({i,j});
        vector<int> d = {0,1,0,-1,0};
        while (q.size()) {
            int i = q.front().first, j = q.front().second, val = grid[i][j];
            q.pop();
            for (int k=0;k<4;k++) {
                int x = i + d[k], y = j + d[k+1];
                if (x < 0 || x == n || y < 0 || y == n || grid[x][y] > 0) continue;
                grid[x][y] += val + 1;
                q.push({x,y});
            }
        }
        int ans = grid[0][0];
        priority_queue<vector<int>> pq;
        pq.push({grid[0][0],0,0});
        while(pq.size()) {
            if (pq.top()[1] == n - 1 && pq.top()[2] == n - 1) break;
            int i = pq.top()[1], j = pq.top()[2], val = pq.top()[0];
            pq.pop();
            for (int k=0;k<4;k++) {
                int x = i + d[k], y = j + d[k+1];
                if (x < 0 || x == n || y < 0 || y == n || grid[x][y] < 0) continue;
                pq.push({min(val,grid[x][y]),x,y});
                grid[x][y] *= -1;
            }
        }
        return pq.top()[0] - 1;
    }
};