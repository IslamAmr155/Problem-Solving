class Solution {
public:
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
        vector<vector<vector<long long>>> v(51,vector<vector<long long>>(51,vector<long long>(51,0)));
        vector<vector<int>> dir = {{1,0},{-1,0},{0,1},{0,-1}};
        long long mod = 1e9+7;
        for (int k=1;k<=maxMove;k++)
        {
            for (int i=0;i<m;i++)
            {
                for (int j=0;j<n;j++)
                {
                    for (vector<int> d : dir)
                        if (i+d[0] < 0 || i+d[0] >= m || j+d[1] < 0 || j+d[1] >= n)
                        {
                            v[i][j][k]++;
                            v[i][j][k] %= mod;
                        }
                        else
                        {
                            v[i][j][k] += v[i+d[0]][j+d[1]][k-1];
                            v[i][j][k] %= mod;
                        }
                }
            }
        }
        return v[startRow][startColumn][maxMove];
    }
};