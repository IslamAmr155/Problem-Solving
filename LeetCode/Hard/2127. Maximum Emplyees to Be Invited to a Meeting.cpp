class Solution {
public:
    int maximumInvitations(vector<int>& favorite) {
        int n = favorite.size();
        vector<int> indegree(n);
        for (int i = 0;i<n;i++)
            indegree[favorite[i]]++;
        queue<int> q;
        for (int i = 0;i<n;i++)
            if (!indegree[i]) q.push(i);
        vector<int> depth (n,1);
        while (!q.empty()) {
            int u = q.front();
            q.pop();
            int v = favorite[u];
            depth[v] = max(depth[v], depth[u] + 1);
            indegree[v]--;
            if (!indegree[v]) q.push(v);
        }
        int longestCycle = 0, twoCycleInvitations = 0;
        for (int i = 0;i<n;i++) {
            if (!indegree[i]) continue;
            int length = 0, u = i;
            while (indegree[u]) {
                indegree[u] = 0;
                length++;
                u = favorite[u];
            }
            if (length == 2) 
                twoCycleInvitations += depth[i] + depth[favorite[i]];
            else 
                longestCycle = max(longestCycle, length);
        }
        return max(longestCycle, twoCycleInvitations);
    }
};