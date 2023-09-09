class Solution {
public:
    vector<int> dp = vector<int> (101,-1);
    vector<int> refresh = vector<int> (101,-1);

    int rec(vector<int>& nums,int i,int n)
    {
        if (i > n)
            return 0;
        if (dp[i] != -1)
            return dp[i];
        int a = 0,b = 0,c = 0;
        a = rec(nums,i+2,n) + nums[i];
        b = rec(nums,i+1,n);
        c = rec(nums,i+3,n) + nums[i];
        return dp[i] = max(a,max(b,c));
    }

    int rob(vector<int>& nums) {
        int n=nums.size();
        if (n == 1)
        {
            return nums[0];
        }
        int a = rec(nums,0,n-2);
        dp = refresh;
        int b = rec(nums,1,n-1);
        return max(a,b);
    }
};