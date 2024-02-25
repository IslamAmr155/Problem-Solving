class Solution {
public:
    vector<vector<int>> dp = vector<vector<int>>(101,vector<int>(101,-1));

    int rec(string& s1,string& s2,string& s3,int i,int j)
    {
        if (i == s1.size()) return s2.substr(j,s2.size() - j) == s3.substr(i+j,s3.size()-i-j);
        if (j == s2.size()) return s1.substr(i,s1.size() - i) == s3.substr(i+j,s3.size()-i-j);
        if (dp[i][j] != -1) return dp[i][j];
        return dp[i][j] = (s1[i] == s3[i+j] && rec(s1,s2,s3,i+1,j)) || 
                            (s2[j] == s3[i+j] && rec(s1,s2,s3,i,j+1)); 
    }

    bool isInterleave(string s1, string s2, string s3) {
        return rec(s1,s2,s3,0,0);
    }
};