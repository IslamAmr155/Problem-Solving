class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& box) {
        int m = box.size(), n = box[0].size();
        vector<vector<char>> ans(n, vector<char>(m, '.'));
        vector<int> d(m, n-1);
        for (int i = n-1;i >= 0;i--)
            for (int j = 0;j < m;j++)
                if (box[m-j-1][i] == '*') {
                    ans[i][j] = box[m-j-1][i];
                    d[j] = i-1;
                }
                else if(box[m-j-1][i] == '#') {
                    ans[d[j]][j] = '#';
                    d[j]--;
                }
        return ans;
    }
};