class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size(), m = grid[0].size();
        int ans = 0;
        for (int i = 0;i<n;i++)
        {
            for (int j = 0;j<m;j++)
            {
                if (grid[i][j] == '1')
                {
                    queue<pair<int,int>> q;
                    q.push({i,j});
                    pair<int,int> p;
                    int x, y;
                    grid[i][j] = '0';
                    while (!q.empty())
                    {
                        p = q.front();
                        q.pop();
                        x = p.first, y = p.second;
                        if (x > 0 && grid[x-1][y] == '1')
                        {
                            q.push({x-1,y});
                            grid[x-1][y] = '0';
                        }
                        if (x < n - 1 && grid[x+1][y] == '1')
                        {
                            q.push({x+1,y});
                            grid[x+1][y] = '0';
                        }
                        if (y < m - 1 && grid[x][y+1] == '1')
                        {
                            q.push({x,y+1});
                            grid[x][y+1] = '0';
                        }
                        if (y > 0 && grid[x][y-1] == '1')
                        {
                            q.push({x,y-1});
                            grid[x][y-1] = '0';
                        }
                    }
                    ans++;
                }
            }
        }
        return ans;
    }
};