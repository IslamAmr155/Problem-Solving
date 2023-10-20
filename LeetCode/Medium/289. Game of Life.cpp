class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int m = board.size(), n = board[0].size();
        for (int i=0;i<m;i++)
            for (int j=0;j<n;j++)
            {
                int c = 0;
                for (int k = max(i-1,0);k < min(i+2,m); k++)
                    for (int a = max(j-1,0); a < min(j+2,n); a++)
                        c += board[k][a] & 1;
                if (c == 3 || c - board[i][j] == 3)
                    board[i][j] |= 2;
            }
        for (int i=0;i<m;i++)
            for (int j=0;j<n;j++)
                board[i][j] >>= 1;
    }
};