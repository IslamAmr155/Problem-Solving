class Solution {
public:
    int ans = 0;
    vector<vector<int>> dp = vector<vector<int>>(101,vector<int>(101,-1));

    int rec(int& n,int& m,int i,int j,vector<vector<int>>& grid)
    {
        if (i == n-1 && j ==  m-1 && !grid[i][j])
            return 1;
        if (dp[i][j] != -1)
            return dp[i][j];
        int a = 0,b=0;
        if (i < n-1 && !grid[i+1][j])
            a = rec(n,m,i+1,j,grid);
        if (j < m-1 && !grid[i][j+1])
            b= rec(n,m,i,j+1,grid);
        return dp[i][j] = a+b;
    }

    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
            int n = obstacleGrid.size(), m = obstacleGrid[0].size();
            if (obstacleGrid[0][0])
                return 0;
            dp[0][0] = rec(n,m,0,0,obstacleGrid);
            return dp[0][0];
       }
};