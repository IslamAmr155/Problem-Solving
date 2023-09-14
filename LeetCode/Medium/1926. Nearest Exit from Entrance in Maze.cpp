class Solution {
public:
    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
        int n = maze.size(), m = maze[0].size();
        queue<vector<int>> q;
        q.push(entrance);
        vector<int> dx = {1,-1,0,0};
        vector<int> dy = {0,0,1,-1};
        int steps = 0;
        bool escaped = false;
        maze[entrance[0]][entrance[1]] = 1;
        while (!q.empty())
        {
            int s = q.size();
            while (s--)
            {
                vector<int> v = q.front();
                q.pop();
                if (steps && (v[0] == n-1 || v[1] ==  m-1 || v[0] == 0 || v[1] == 0))
                    return steps;
                for (int i=0;i<4;i++)
                {
                    int y = v[0]+dy[i], x = v[1]+dx[i];
                    if (y >= 0 && y < n && x >= 0 && x < m && maze[y][x] == '.')
                    {
                        q.push({y,x});
                        maze[y][x] = '+';
                    }
                }
            }
            steps++;
        }
            return -1;
    }
};