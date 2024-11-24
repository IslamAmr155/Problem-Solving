class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        long long ans = 0;
        int c = 0, n = matrix.size(), mi = INT_MAX; 
        for (int i = 0;i<n;i++) 
            for (int j = 0;j<n;j++) {
                ans += abs(matrix[i][j]);
                if (matrix[i][j] < 0) c++;
                mi = min(mi, abs(matrix[i][j]));
            }
        return (c % 2 == 0) ? ans : ans - mi * 2;
    }
};