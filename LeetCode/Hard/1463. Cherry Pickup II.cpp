class Solution {
public:
    vector<vector<vector<int>>> dp = 
    vector<vector<vector<int>>>(71,vector<vector<int>>(71,vector<int>(71,-1)));

    vector<vector<int>> d = {{-1,-1},{-1,0},{-1,1},{0,-1},{0,0},{0,1},{1,-1},{1,0},{1,1}};

    int rec(vector<vector<int>>& v,int i,int j1,int j2)
    {
        int n = v.size(), m = v[0].size();
        if (i == n || j1 < 0 || j1 == m || j2 < 0 || j2 == m) return 0;
        if (dp[i][j1][j2] != -1) return dp[i][j1][j2];
        for (int k = 0;k<9;k++)
            dp[i][j1][j2] = max(dp[i][j1][j2],rec(v,i+1,j1+d[k][0],j2+d[k][1]));
        return dp[i][j1][j2] += (j1 != j2) ? (v[i][j1]+v[i][j2]) : v[i][j1];
    }

    int cherryPickup(vector<vector<int>>& grid) {
        return rec(grid,0,0,grid[0].size()-1);
    }
};