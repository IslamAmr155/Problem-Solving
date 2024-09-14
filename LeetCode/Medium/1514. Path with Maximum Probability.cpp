class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start_node, int end_node) {
        priority_queue<pair<double,int>> q;
        q.push({1,start_node});
        vector<vector<pair<double,int>>> adj(n);
        for (int i = 0;i<edges.size();i++) {
            adj[edges[i][0]].push_back({succProb[i],edges[i][1]});
            adj[edges[i][1]].push_back({succProb[i],edges[i][0]});
        }
        vector<double> v(n);
        while (!q.empty()) {
            auto p = q.top();
            q.pop();
            double c = p.first;
            int u = p.second;
            if (u == end_node) return c;
            if (c > v[u]) {
                v[u] = c;
                for (int i = 0;i < adj[u].size();i++) q.push({c * adj[u][i].first, adj[u][i].second});
            }
        } 
        return 0;
    }
};