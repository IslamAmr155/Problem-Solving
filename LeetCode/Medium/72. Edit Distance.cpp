class Solution {
public:
    vector<vector<int>> dp = vector<vector<int>> (501,vector<int>(501,-1));

    int rec(string str1,string str2,int n,int m)
    {
        if (dp[n][m] != -1)
            return dp[n][m];
        if (m == 0)
            return n;
        if (n == 0)
            return m;
        if (str1[n-1] == str2[m-1])
            dp[n][m] = rec(str1,str2,n-1,m-1);
        else
            dp[n][m] = 1 + min(rec(str1,str2,n-1,m),min(rec(str1,str2,n,m-1),rec(str1,str2,n-1,m-1)));
        return dp[n][m];
    }

    int minDistance(string word1, string word2) {
        return rec(word1,word2,word1.size(),word2.size());
    }
};