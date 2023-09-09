class Solution {
public:
    string longestPalindrome(string s) {
         vector<vector<bool>> dp = vector<vector<bool>> (1001,vector<bool>(1001));
    int m=0,k=0;
        int n = s.size();
        for (int i=0;i<n;i++)
            dp[i][i] = 1;

        for (int i=0;i<n-1;i++)
            if (s[i] == s[i+1])
            {
                dp[i][i+1] = 1;
                m = i;
                k = i+1;
            }

        for (int d=2;d<n;d++)
        {
            for (int i=0;i< n - d;i++)
            {
                int j = i + d;
                if (s[i] == s[j] && dp[i+1][j-1])
                {
                    dp[i][j] = 1;
                    m=i;
                    k=j;
                }
            }
        }
        return s.substr(m,k-m+1);
    }
};