class Solution {
public:
    void rec(int i, int j, int k, vector<vector<char>>& b, string& w, bool& f)
    {
        if (i < 0 || i == b.size() || j < 0 || j == b[0].size())
            return;
        if (b[i][j] == w[k])
        {
            k++;
            char c = b[i][j];
            b[i][j] = '#';
            if (k == w.size())
            {
                f = 1;
                return;
            }
            rec(i-1,j,k,b,w,f);
            rec(i+1,j,k,b,w,f);
            rec(i,j-1,k,b,w,f);
            rec(i,j+1,k,b,w,f);
            b[i][j] = c;
        }
    }

    bool exist(vector<vector<char>>& board, string word) {
        bool f = 0;
        for (int i = 0;i < board.size() && !f;i++)
            for (int j = 0;j < board[0].size() && !f;j++)
                if (board[i][j] == word[0])
                    rec(i,j,0,board,word,f);
        return f;
    }
};