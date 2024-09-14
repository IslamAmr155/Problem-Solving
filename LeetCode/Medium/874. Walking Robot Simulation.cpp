class Solution {
public:
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        set<vector<int>> s;
        for (auto v : obstacles) s.insert(v);
        vector<vector<int>> dir = {{0,1},{1,0},{0,-1},{-1,0}};
        int x = 0, y = 0, ans = INT_MIN, d = 0;
        for (int c : commands) {
            if (c < 0) 
                if (c == -1) d = ++d > 3 ? 0 : d;
                else d = --d < 0 ? 3 : d;
            else while (c-- && s.find({x+dir[d][0],y+dir[d][1]}) == s.end())
                x+=dir[d][0], y+=dir[d][1];
            ans = max(ans,x*x + y*y);
        }
        return ans;
    }
};