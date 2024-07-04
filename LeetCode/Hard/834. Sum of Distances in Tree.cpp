class Solution {
public:
    vector<int> size, ans;
    vector<vector<int>> adj;

    void dfs(int u, int v) {
        for (int x : adj[u]) {
            if (x != v) {
                dfs(x,u);
                size[u] += size[x];
                ans[u] += size[x] + ans[x];
            }
        }
    }

    void dfs1(int u, int v) {
        for (int x : adj[u]) {
            if (x != v) {
                ans[x] = (ans[u] - 2*size[x] + ans.size());
                dfs1(x,u);
            }
        }
    }

    vector<int> sumOfDistancesInTree(int n, vector<vector<int>>& edges) {
        adj.resize(n);
        ans.resize(n);
        size.resize(n,1);
        for (vector<int> x : edges) {
            adj[x[0]].push_back(x[1]);
            adj[x[1]].push_back(x[0]);
        }
        dfs(0, -1);
        dfs1(0, -1);
        return ans;
    }
};