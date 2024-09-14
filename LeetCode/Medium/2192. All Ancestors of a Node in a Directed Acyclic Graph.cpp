class Solution {
public:
    vector<vector<int>> ans;

    void dfs(int u, int p, vector<vector<int>>& adj) {
        for (int x : adj[u]) {
            if (ans[x].empty() || ans[x].back() != p) { 
                ans[x].push_back(p);
                dfs(x,p,adj);
            }
        }
    }

    vector<vector<int>> getAncestors(int n, vector<vector<int>>& edges) {
        ans.resize(n);
        vector<vector<int>> adj(n);
        for (auto x : edges) adj[x[0]].push_back(x[1]);
        for (int i = 0;i<n;i++) dfs(i,i,adj);
        return ans; 
    }
};