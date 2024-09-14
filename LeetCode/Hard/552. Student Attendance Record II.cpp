class Solution {
public:
    int mod = 1e9 + 7;

    int rec(int i,int& n,bool a,int l,vector<vector<vector<int>>>& dp) {
        if (i == n) return 1;
        if (dp[i][l][a] != -1) return dp[i][l][a];
        int x = rec(i+1,n,a,0,dp) % mod;
        int y = a ? 0 : rec(i+1,n,true,0,dp) % mod;
        int z = l < 2 ? rec(i+1,n,a,l+1,dp) % mod : 0;
        return dp[i][l][a] = ((x + y) % mod + z) % mod;
    }

    int checkRecord(int n) {
        vector<vector<vector<int>>> dp(n,vector<vector<int>>(3,vector<int>(2,-1)));
        return rec(0,n,false,0,dp);
    }
};