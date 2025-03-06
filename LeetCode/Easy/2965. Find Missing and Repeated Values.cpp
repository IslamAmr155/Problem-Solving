class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<int> c(n*n+1), ans(2);
        int k = 1;
        for (int i = 0;i<n;i++)
            for (int j = 0;j<n;j++) {
                if (c[grid[i][j]]++) ans[0] = grid[i][j];
                while (c[k]) k++;
            }
        ans[1] = k;
        return ans;
    }
};