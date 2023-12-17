class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n = mat.size(), j = 0, k = mat[0].size() - 1, sum = 0;
        for (int i = 0;i<n;i++,j++,k--)
        {
            if (j == k)
                sum -= mat[i][j];
            sum += mat[i][j];
            sum += mat[i][k];
        }
        return sum;
    }
};