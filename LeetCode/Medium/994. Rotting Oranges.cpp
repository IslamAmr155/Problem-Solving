class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        vector<int> dx = {1,-1,0,0};
        vector<int> dy = {0,0,1,-1};
        queue<vector<int>> q;
        int oranges = 0;
        for (int i=0;i<m;i++)
            for (int j=0;j<n;j++)
            {
                if (grid[i][j] == 2)
                    q.push({i,j});
                if (grid[i][j] == 1)
                    oranges++;
            }
        int minutes = 0, rotten = 0;
        while(!q.empty())
        {
            int s = q.size();
            while (s--)
            {
                vector<int> v = q.front();
                q.pop();
                for (int i=0;i<4;i++)
                {
                    int y = v[0]+dy[i], x = v[1]+dx[i];
                    if (y >= 0 && y < m && x >=0 && x < n && grid[y][x] == 1)
                    {
                        rotten++;
                        grid[y][x] = 2;
                        q.push({y,x});
                    }
                }
            }
            minutes++;
        }
        if (rotten == oranges)
            return (!minutes) ? minutes : --minutes;
        return -1;
    }
};