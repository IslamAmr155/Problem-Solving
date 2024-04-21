class Solution {
public:
    vector<vector<int>> findFarmland(vector<vector<int>>& land) {
        int m = land.size(), n = land[0].size();
        vector<vector<int>> ans;
        for (int i = 0;i<m;i++)
        {
            for (int j = 0;j<n;j++)
            {
                if (land[i][j])
                {
                    vector<int> v(4);
                    v[0] = v[2] = i;
                    v[1] = v[3] = j;
                    queue<pair<int,int>> q;
                    q.push({i,j});
                    int x,y;
                    pair<int,int> p;
                    while(q.size())
                    {
                        p = q.front();
                        q.pop();
                        x = p.first, y = p.second;
                        if (x+1 < m && land[x+1][y])
                        {
                            land[x+1][y] = 0;
                            q.push({x+1,y});
                        }
                        if (y+1 < n && land[x][y+1])
                        {
                            land[x][y+1] = 0;
                            q.push({x,y+1});
                        }
                    }
                    v[2] = x;
                    v[3] = y;
                    ans.push_back(v);
                }       
            }
        }
        return ans;
    }
};