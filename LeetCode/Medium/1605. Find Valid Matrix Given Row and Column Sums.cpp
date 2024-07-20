class Solution {
public:
    vector<vector<int>> restoreMatrix(vector<int>& rowSum, vector<int>& colSum) {
        int m = rowSum.size(), n = colSum.size();
        vector<vector<int>> ans(m,vector<int>(n));
        int i = 0, j = 0, temp;
        while (i < m && j < n) {
            temp = ans[i][j] = min(rowSum[i], colSum[j]);
            if (!(rowSum[i] -= temp)) i++;
            if (!(colSum[j] -= temp)) j++;
        }
        return ans;
    }
};