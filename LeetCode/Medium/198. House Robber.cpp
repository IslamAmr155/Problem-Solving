class Solution {
public:
    vector<int> dp = vector<int> (101,-1);

    int rec(vector<int>& nums,int i)
    {
        if (i >= nums.size())
            return 0;
        if (dp[i] != -1)
            return dp[i];
        int a = 0,b = 0,c = 0;
        a = rec(nums,i+2) + nums[i];
        b = rec(nums,i+1);
        c = rec(nums,i+3) + nums[i];
        return dp[i] = max(a,max(b,c));
    }

    int rob(vector<int>& nums) {
        int a =rec(nums,0);
        return dp[0];
    }
};