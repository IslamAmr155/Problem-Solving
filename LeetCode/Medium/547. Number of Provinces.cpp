class Solution {
public:
    int provinces = 0;

    void dfs(vector<vector<int>>& m,vector<bool>& visited,int& node)
    {
        if(!visited[node])
        {
            visited[node] = 1;
            for (int i=0;i<m[node].size();i++)
                if (m[node][i] && i != node)
                    dfs(m,visited,i);
        }
    }

    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<bool> visited(n);
        for (int i=0;i<n;i++)
            if (!visited[i])
            {
                dfs(isConnected,visited,i);
                provinces++;
            }
        return provinces;
    }
};