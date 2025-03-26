class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        vector<int> v;
        for (int i = 0;i<grid.size();i++)
            for (int j = 0;j<grid[0].size();j++) v.push_back(grid[i][j]);
        sort(v.begin(), v.end());
        int median = v[v.size()/2], ans = 0;
        for (int& i : v)
            if (abs(median - i) % x) return -1;
            else ans += abs(median - i) / x;
        return ans;
    }
};