class Solution {
public:
    vector<vector<int>> spiralMatrixIII(int rows, int cols, int rStart, int cStart) {
        vector<vector<int>> ans = {{rStart, cStart}}, d = {{0,1}, {1,0}, {0,-1}, {-1,0}};
        int k = 0;
        while (ans.size() != rows * cols) {
            for (int i = 0;i < k / 2 + 1;i++) {
                rStart += d[k%4][0];
                cStart += d[k%4][1];
                if (0 <= rStart && rStart < rows && 0 <= cStart && cStart < cols)
                    ans.push_back({rStart, cStart});
            }
            k++;
        }
        return ans;
    }
};