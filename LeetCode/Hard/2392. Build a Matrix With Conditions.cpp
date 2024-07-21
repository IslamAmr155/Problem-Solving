class Solution {
public:
    void topologicalSort(vector<vector<int>>& adj,int k,vector<int>& ans) {
        vector<int> indegree(k+1);
        for (int i = 1;i<=k;i++)
            for (auto x : adj[i]) indegree[x]++;
        queue<int> q;
        for (int i = 1;i<=k;i++) 
            if (!indegree[i]) q.push(i);
        while(!q.empty()) {
            int u = q.front();
            q.pop();
            ans.push_back(u);
            for (auto x : adj[u]) 
                if(--indegree[x] == 0) q.push(x);
        }
    }

    vector<vector<int>> buildMatrix(int k, vector<vector<int>>& rowConditions, vector<vector<int>>& colConditions) {
        vector<vector<int>> row(k+1), col(k+1);
        for (auto v : rowConditions) row[v[0]].push_back(v[1]);
        for (auto v : colConditions) col[v[0]].push_back(v[1]);
        vector<int> r,c;
        topologicalSort(row, k, r);
        topologicalSort(col, k, c);
        if (r.size() != k || c.size() != k) return {};
        vector<vector<int>> ans(k,vector<int>(k));
        unordered_map<int,int> m;
        for (int i = 0;i<k;i++) m[c[i]] = i;
        for (int i = 0;i<k;i++) ans[i][m[r[i]]] = r[i];
        return ans; 
    }
};