class Solution {
public:
    int dp(int s, vector<int>& ans)
    {
        if (s == 0)
            return 1;
        if (ans[s] != 0)
            return ans[s];
        
        int cur =0;
        if (s - 1 >= 0)
            cur += dp(s - 1,ans);
        if (s - 2 >= 0)
            cur += dp(s - 2,ans);

        ans[s] = cur;
        return cur;
    }

    int climbStairs(int n) {
        vector<int> ans (n+1);
        dp(n,ans);
        return ans[n];
    }
};