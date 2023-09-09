class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans(numRows);
        ans[0] = vector<int> (1,1);
        if (numRows == 1)
            return ans;
        ans[1] = vector<int> (2,1);
        if (numRows == 2)
            return ans;
        for (int i=2;i<numRows;i++)
        {
            vector<int> v (i+1,1);
            int len = ans[i-1].size() - 1;
            for (int j = 1;j<=len;j++)
                v[j] = ans[i-1][j] + ans[i-1][j-1];
            ans[i] = v;
        }
        return ans;
    }
};