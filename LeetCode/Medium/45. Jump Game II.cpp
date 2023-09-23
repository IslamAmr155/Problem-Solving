class Solution {
public:
    long long rec(vector<long long>& dp,vector<int>& nums,int& end,int i)
    {
        if (i == end)
        {
            return 0;
        }
        else if (i > end)
            return INT_MAX;
        if (dp[i] != INT_MAX)
            return dp[i];
        int jump = nums[i];
        for (int j=jump;j>0;j--)
            dp[i] = min<long long>(dp[i], rec(dp,nums,end,i+j) + 1);
        return dp[i];
    }

    long long jump(vector<int>& nums) {
        int end = nums.size() - 1;
        vector<long long> dp(end+1,INT_MAX);
        return rec(dp,nums,end,0);
    }
};