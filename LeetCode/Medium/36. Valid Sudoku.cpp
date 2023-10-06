class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<vector<int>> row(9,vector<int>(10));
        vector<vector<int>> column(9,vector<int>(10));
        vector<vector<int>> box(9,vector<int>(10));
        int b = 0;
        for (int i=0;i<9;i++)
        {
            if (i != 0 && i % 3 == 0)
                b+=3;
            for (int j=0;j<9;j++)
            {
                int c = board[i][j] - '0';
                if (j != 0 && j % 3 == 0)
                    b++;
                if (c < 0)
                    continue;
                if (row[i][c] != 0 || column[j][c] != 0 || box[b][c] != 0)
                    return false;
                row[i][c]++;
                column[j][c]++;
                box[b][c]++;
            }
            b -= 2;
        }
        return true;
    }
};