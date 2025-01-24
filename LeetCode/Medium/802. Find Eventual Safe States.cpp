class Solution {
public:
    bool dfs(vector<vector<int>>& g, set<int>& s,vector<bool>& v,int u) {
        v[u] = 1;
        for (int i = 0;i<g[u].size();i++) {
            if (s.contains(g[u][i])) {
                continue;
            } 
            else if (v[g[u][i]] == 0) {
                if (!dfs(g,s,v,g[u][i])) return false;  
            } 
            else return false;
        }
        s.insert(u);
        return true;
    }

    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n = graph.size();
        set<int> s;
        vector<bool> v(n);
        for (int i = 0;i<n;i++)
            if (graph[i].size() == 0) {
                v[i] = 1;
                s.insert(i);
            }
        for (int i = 0;i<n;i++)
            if (v[i] == 0)
                dfs(graph,s,v,i);
        return vector<int> (s.begin(), s.end());
    }
};