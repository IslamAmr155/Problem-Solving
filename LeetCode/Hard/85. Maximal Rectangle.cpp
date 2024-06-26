class Solution {
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        int m = matrix.size(), n = matrix[0].size(), ans = 0;
        vector<int> left (n,0), height (n,0), right (n,n);
        for (int i = 0;i<m;i++)
        {
            int l = 0, r = n;
            for (int j = 0;j<n;j++)
                if (matrix[i][j] == '1')
                {
                    height[j]++;
                    left[j] = max(left[j],l);
                }
                else
                {
                    height[j] = 0;
                    left[j] = 0;
                    l = j + 1;
                }
            for (int j = n - 1; j>=0;j--)
                if (matrix[i][j] == '1') right[j] = min(right[j],r);
                else
                {
                    right[j] = n;
                    r = j;
                }
            for (int j = 0;j<n;j++) ans = max(ans, (right[j]-left[j])*height[j]);
        }
        return ans;
    }
};