class Solution {
public:
    vector<int> p, s;

    int find (int u) {
        if (u == p[u]) return u;
        return p[u] = find(p[u]);
    }

    bool Union(int u, int v) {
        int pu = find(u), pv = find(v);
        if (pu == pv) return false;
        if (pu > pv) {
            p[pv] = pu;
            s[pu] += s[pv];
        } else {
            p[pu] = pv;
            s[pv] += s[pu];
        }
        return true;
    }

    int largestIsland(vector<vector<int>>& grid) {
        int n = grid.size();
        p.resize(n*n);
        s.resize(n*n, 1);
        for (int i = 0;i<n;i++)
            for (int j = 0;j<n;j++)
                p[i*n+j] = i*n+j;
        vector<int> d = {0, 1, 0, -1, 0};
        int ans = 0;
        for (int i = 0;i<n;i++)
            for (int j = 0;j<n;j++)
                if (!grid[i][j]) continue;
                else {
                    for (int k = 0;k<4;k++) {
                        int y = i + d[k], x = j + d[k+1];
                        if (min(x,y) >= 0 && max(x,y) < n && grid[y][x])
                            Union(i*n+j, y*n+x);
                    }
                    int pu = find(i*n+j);
                    ans = max(ans, s[pu]);
                }
        for (int i = 0;i<n;i++)
            for (int j = 0;j<n;j++) {
                unordered_set<int> us;
                if (grid[i][j]) continue;
                else {
                    for (int k = 0;k<4;k++) {
                        int y = i + d[k], x = j + d[k+1];
                        if (min(x,y) >= 0 && max(x,y) < n && grid[y][x]) {
                            us.insert(find(y*n+x));
                        }
                    }
                }
                int c = 1;
                for (auto k : us)
                    c += s[k];
                ans = max(ans, c);
            }
        return ans;
    }
};