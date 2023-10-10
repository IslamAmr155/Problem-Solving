class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n = matrix.size(), m = matrix[0].size(), first = 0, last = n - 1, start = 0, end = m - 1;
        vector<int> ans;
        while (first < last && start < end)
        {
            for (int j = start;j<end;j++)
                ans.push_back(matrix[first][j]);
            for (int j = first;j<last;j++)
                ans.push_back(matrix[j][end]);
            for (int j = end;j>start;j--)
                ans.push_back(matrix[last][j]);
            for (int j = last;j>first;j--)
                ans.push_back(matrix[j][start]);
            end--;
            first++;
            start++;
            last--;
        }
        if (first == last)
            for (int j=start;j<=end;j++)
                ans.push_back(matrix[first][j]);
        else if (start == end)
            for (int j = first;j<=last;j++)
                ans.push_back(matrix[j][start]);
        return ans;
    }
};