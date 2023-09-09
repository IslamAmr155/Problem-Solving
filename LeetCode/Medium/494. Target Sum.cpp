class Solution {
public:
    vector<vector<int>> dp = vector<vector<int>> (1001,vector<int>(2001,-1));

    int rec (const vector<int>& nums,const int& target,int i,int c)
    {
        if (i == nums.size())
            if (c == target)
                return 1;
            else
                return 0;
        if (dp[i][c+1000] != -1)
            return dp[i][c+1000];
        return dp[i][c+1000] = rec(nums,target,i+1,c-nums[i]) + rec(nums,target,i+1,c+nums[i]);
    }

    int findTargetSumWays(vector<int>& nums, int target) {
        return rec(nums,target,0,0);
    }
};