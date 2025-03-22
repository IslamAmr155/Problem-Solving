class Solution {
public:
    void dfs(vector<vector<int>>& adj, vector<bool>& vis, int& v, int& e,int i) {
        if (vis[i]) return;
        vis[i] = 1;
        v++;
        e += adj[i].size();
        for (int& u : adj[i])
            dfs(adj, vis, v, e, u);
    }

    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        vector<vector<int>> adj(n);
        for (auto& e : edges) {
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }
        vector<bool> vis(n);
        int ans = 0;
        for (int i = 0;i<n;i++) {
            int v = 0, e = 0;
            if (!vis[i]) {
                dfs(adj, vis, v, e, i);
                if (e == v*(v-1)) ans++;
            }
        }
        return ans;
    }
};