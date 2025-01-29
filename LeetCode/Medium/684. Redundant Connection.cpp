class Solution {
public:
    int find(int u, vector<int>& p) {
        if (u == p[u]) return u;
        return p[u] = find(p[u], p);
    }

    bool Union(int u, int v, vector<int>& p, vector<int>& r) {
        int pu = find(u, p), pv = find(v, p);
        if (pu == pv) return false;
        if (r[pu] > r[pv]) {
            r[pu]++;
            p[pv] = pu;
        } else {
            r[pv]++;
            p[pu] = pv;
        }
        return true;
    }

    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        int n = edges.size();
        vector<int> p(n+1), r(n+1);
        for (int i = 0;i<=n;i++) p[i] = i, r[i] = 1;
        for (vector<int>& e : edges)
            if (!Union(e[0], e[1], p, r)) return e;
        return {};
    }
};