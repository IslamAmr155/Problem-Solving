class Solution {
public:
    int rec(int& n,int i,int j,vector<vector<int>>& triangle,vector<vector<int>>& dp)
    {
        if (i == n)
            return 0;
        if (dp[i][j] != -1)
            return dp[i][j];
        int a = triangle[i][j] + rec(n,i+1,j,triangle,dp);
        int b = triangle[i][j] + rec(n,i+1,j+1,triangle,dp);
        return dp[i][j] = min(a,b);
    }

    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();
        vector<vector<int>> dp(n,vector<int>(n,-1));
        return rec(n,0,0,triangle,dp);
    }
};