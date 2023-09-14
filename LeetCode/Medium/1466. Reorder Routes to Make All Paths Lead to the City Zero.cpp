class Solution {
public:
    void dfs (vector<vector<int>>& connections,vector<bool>& visited,int i,int& change)
    {
        if(!visited[i])
        {
            visited[i] = 1;
            int u;
            for (int j=0;j<connections[i].size();j++)
            {
                u = connections[i][j];
                if (!visited[abs(u)])
                {
                    if (u > 0)
                        change++;
                    dfs(connections,visited,abs(u),change);
                }
            }
        }
    }

    int minReorder(int n, vector<vector<int>>& connections) {
        vector<bool> visited(n);
        vector<vector<int>> c(n);
        for (auto e:connections)
        {
            c[e[0]].push_back(e[1]);
            c[e[1]].push_back(-e[0]);
        }
        int change = 0;
        for (int i=0;i<n;i++)
                dfs(c,visited,i,change);
        return change;
    }
};