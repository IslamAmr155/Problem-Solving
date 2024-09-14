class Solution {
public:
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        int m = grid1.size(), n = grid1[0].size();
        vector<vector<int>> v(m,vector<int>(n)), dir = {{-1,0},{1,0},{0,-1},{0,1}};
        int ans = 0;
        for (int i = 0;i<m;i++) {
            for (int j = 0;j<n;j++) {
                if (grid2[i][j] && grid1[i][j] && !v[i][j]) {
                    queue<vector<int>> q, s;
                    q.push({i,j});
                    v[i][j] = 1;
                    while (!q.empty()) {
                        vector<int> t = q.front();
                        s.push(t);
                        int y = t[0], x = t[1];
                        q.pop();
                        for (auto d : dir) {
                            int a = y+d[0], b = x+d[1];
                            if (min(a,b) >= 0 && a < m && b < n && !v[a][b] && grid2[a][b]) {
                                v[a][b] = 1;
                                q.push({a, b});
                            }
                        }
                    } 
                    while (!s.empty()) {
                        vector<int> t = s.front();
                        if (!grid1[t[0]][t[1]]) break;
                        s.pop();
                    }
                    if (s.empty()) ans++;
                }
            }
        }
        return ans;
    }
};