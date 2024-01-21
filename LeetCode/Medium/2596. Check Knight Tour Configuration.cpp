class Solution {
public:
    vector<pair<int,int>> dir={{-2,1}, {-1,2}, {1,2}, {2,1}, {2,-1}, {1,-2}, {-1,-2}, {-2,-1}};
    bool checkValidGrid(vector<vector<int>>& grid) {
        if (grid[0][0] != 0)
            return false;
        int n = grid.size(), i = 0, j = 0, c = 1;
        bool ans = false;
        while (c < n*n)
        {
            for (int k = 0;k<8;k++)
                if (i+dir[k].first >= 0 && i+dir[k].first < n && j+dir[k].second >= 0 && 
                j+dir[k].second < n && grid[i+dir[k].first][j+dir[k].second] == c)
                {
                    c++;
                    i = i+dir[k].first;
                    j = j+dir[k].second;
                    ans = true;
                    break;
                }   
            if (ans) ans = false;
            else return false; 
        }
        return true;
    }
};