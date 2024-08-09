class Solution {
public:
    bool calc(vector<vector<int>>& g,int i, int j) {
        unordered_map<int,int> map;
        for (int k=i;k<i+3;k++)
            for (int m=j;m<j+3;m++) {
                if (g[k][m] > 9 || g[k][m] < 1 || map[g[k][m]]) return false;
                map[g[k][m]]++;
            }
        int sum = accumulate(g[i].begin() + j,g[i].begin() + j + 3, 0), temp;
        for (int k = i + 1;k < i + 3;k++) {
            temp = accumulate(g[k].begin() + j,g[k].begin() + j + 3, 0);
            if (temp != sum) return false;
        }
        for (int k = j;k < j + 3;k++) {
            temp = 0;
            for (int m = i;m < i + 3;m++) temp += g[m][k];
            if (temp != sum) return false;
        }
        temp = 0;
        for (int k = 0;k < 3;k++) temp += g[i+k][j+k];
        if (temp != sum) return false;
        temp = 0;
        for (int k = 0;k < 3;k++) temp += g[i+2-k][j+2-k];
        if (temp != sum) return false;
        return true;
    }

    int numMagicSquaresInside(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        int ans = 0, temp = 0;
        for (int i = 0;i <= n - 3;i++) 
            for (int j = 0;j <= m - 3;j++) ans += calc(grid, i , j);
        return ans;
    }
};