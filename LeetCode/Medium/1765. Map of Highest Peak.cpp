class Solution {
public:
    vector<vector<int>> highestPeak(vector<vector<int>>& isWater) {
        int m = isWater.size(), n = isWater[0].size();
        vector<vector<int>> ans(m, vector<int>(n, INT_MAX));
        vector<int> d = {0, 1, 0, -1, 0};
        queue<vector<int>> q;
        for (int i = 0;i<m;i++)
            for (int j = 0;j<n;j++)
                if (isWater[i][j] == 1) {
                    ans[i][j] = 0;
                    q.push({i,j});
                }
        while(!q.empty()) {
            vector<int> v = q.front();
            q.pop();
            for (int i = 0;i<4;i++) 
                if (min(v[0]+d[i], v[1]+d[i+1]) >= 0 && v[0]+d[i] < m && v[1]+d[i+1] < n && ans[v[0]+d[i]][v[1]+d[i+1]] == INT_MAX) {
                ans[v[0]+d[i]][v[1]+d[i+1]] = ans[v[0]][v[1]] + 1;
                q.push({v[0]+d[i], v[1] + d[i+1]});
            }
        }
        return ans;
    }
};