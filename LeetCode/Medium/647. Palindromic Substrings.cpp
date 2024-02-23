class Solution {
public:
    vector<vector<int>> dp = vector<vector<int>> (1001,vector<int>(1001,-1));
    int m = 0;

    int rec(string& s,int b,int e)
    {
        if (b > e) return 1;
        if (dp[b][e] != -1) return dp[b][e];a
        dp[b][e] = (rec(s,b+1,e-1) && s[b] == s[e]) ? 1 : 0;
        if (dp[b][e]) m++;
        return dp[b][e];
    }

    int countSubstrings(string s) {
        for (int i = 0;i<s.size();i++)
        {
            rec(s,i,s.size()-1);
            rec(s,0,s.size()-2-i);
        }
        return m;
    }
};