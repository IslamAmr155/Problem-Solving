class Solution {
public:
    vector<int> maxPoints(vector<vector<int>>& grid, vector<int>& queries) {
        int m = grid.size(), n = grid[0].size();
        vector<vector<bool>> vis(m, vector<bool>(n));
        vector<int> v, ans(queries.size()), d = {1, 0, -1, 0, 1};
        for (int i = 0;i<queries.size();i++)
            v.push_back(i);
        sort(v.begin(), v.end(), [&](int& a, int& b){
            return queries[a] < queries[b];
        });
        priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> q;
        q.push({grid[0][0], 0, 0});
        vis[0][0] = 1;
        int c = 0;
        for (int& i : v) {
            int u = queries[i];
            while (!q.empty() && q.top()[0] < u) {
                c++;
                int x = q.top()[1], y = q.top()[2];
                q.pop();
                for (int j = 0;j<4;j++) {
                    int nx = x+d[j], ny = y+d[j+1];
                    if (min(nx,ny) >= 0 && nx < m && ny < n && !vis[nx][ny]) {
                        vis[nx][ny] = 1;
                        q.push({grid[nx][ny], nx, ny});
                    }
                }
            }
            ans[i] = c;
        }
        return ans;
    }
};