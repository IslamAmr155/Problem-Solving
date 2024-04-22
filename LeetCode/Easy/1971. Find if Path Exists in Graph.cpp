class Solution {
public:
    bool rec(int s, vector<vector<int>>& edges, int d, vector<int>& visited) {
        if (s == d) return true;
        if (visited[s]) return false;
        visited[s] = 1;
        bool ans = false;
        for (int i = 0;i<edges[s].size() && !ans;i++)
            ans = rec(edges[s][i],edges,d,visited);
        return ans;
    }

    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>> v(n);
        vector<int> visited(n);
        for (vector<int> x : edges)
        {
            v[x[0]].push_back(x[1]);
            v[x[1]].push_back(x[0]);
        }
        return rec(source, v, destination, visited);
    }
};