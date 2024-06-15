class Solution {
public:
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
        if (n == 1) return {0};

        vector<int> v(n);
        vector<vector<int>> adj(n);
        for (vector<int> x : edges) {
            v[x[0]]++;
            v[x[1]]++;
            adj[x[0]].push_back(x[1]);
            adj[x[1]].push_back(x[0]);
        }

        queue<int> q;

        for (int i = 0;i<n;i++) if (v[i] == 1) q.push(i);

        while (n > 2) {
            int x = q.size();
            n -= x;

            for (int i = 0;i<x;i++) {
                int temp = q.front();
                q.pop();

                for (int j = 0;j<adj[temp].size();j++) {
                    v[adj[temp][j]]--;
                    if (v[adj[temp][j]] == 1)
                        q.push(adj[temp][j]);
                }
            }
        }

        vector<int> ans;
        while (!q.empty()) {
            ans.push_back(q.front());
            q.pop();
        }
        return ans;
    }
};