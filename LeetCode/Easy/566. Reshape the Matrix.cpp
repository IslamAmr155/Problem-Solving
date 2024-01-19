class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int n = mat.size(), m = mat[0].size();
        if (n*m != r*c)
            return mat;
        vector<vector<int>> ans(r,vector<int>(c));
        int x = 0, y = 0;
        for (int i = 0; i < n; i++)
            for (int j = 0;j<m;j++)
            {
                ans[y][x++] = mat[i][j];
                if (x == c)
                {
                    x = 0;
                    y++;
                } 
            }
        return ans;
    }
};