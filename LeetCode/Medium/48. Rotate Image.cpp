class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size(), start = 0, end = n - 1;
        queue<int> q;
        while (start < end)
        {
            for (int i = start;i<end;i++)
            {
                q.push(matrix[i][end]);
                matrix[i][end] = matrix[start][i];
            }
            for (int i = end;i>start;i--)
            {
                q.push(matrix[end][i]);
                matrix[end][i] = q.front();
                q.pop();
            }
            for (int i = end;i>start;i--)
            {
                q.push(matrix[i][start]);
                matrix[i][start] = q.front();
                q.pop();
            }
            for (int i = start;i<end;i++)
            {
                matrix[start][i] = q.front();
                q.pop();
            }
            end--;
            start++;
        }
    }
};