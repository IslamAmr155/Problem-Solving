class Solution {
public:
    vector<vector<int>> dp = vector<vector<int>> (1001,vector<int>(1001,-1));

    int rec (int i,int j,const string& text1,const string& text2)
    {
        if (i == text1.size() || j == text2.size())
            return 0;
        if (dp[i][j] != -1)
            return dp[i][j];
        if (text1[i] == text2[j])
        {
            dp[i][j] = 1 + rec(i+1,j+1,text1,text2);
        }
        else
        {
            int a = rec(i+1,j,text1,text2);
            int b = rec(i,j+1,text1,text2);
            dp[i][j] = max(a,b);
        }
        return dp[i][j];
    }

    int longestCommonSubsequence(string text1, string text2) {
        return rec(0,0,text1,text2);
    }
};