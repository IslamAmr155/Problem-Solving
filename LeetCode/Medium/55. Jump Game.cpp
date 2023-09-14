class Solution {
public:
    void rec(vector<bool>& dp,vector<int>& nums,int& end,int i,bool& f)
    {
        if (i == end)
        {
            f = 1;
            return;
        }
        else if (i > end || !dp[i])
            return;
        int jump = nums[i];
        for (int j=jump;j>0 && !f;j--)
            rec(dp,nums,end,i+j,f);
        if (!f)
            dp[i] = 0;
    }

    bool canJump(vector<int>& nums) {
        int end = nums.size() - 1;
        vector<bool> dp(end+1,1);
        bool f = 0;
        rec(dp,nums,end,0,f);
        return f;
    }
};