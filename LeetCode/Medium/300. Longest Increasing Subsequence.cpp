class Solution {
public:
    vector<int> dp = vector<int> (2501,-1);

    int rec(const vector<int>& nums,int i)
    {
        if (i == nums.size())
            return 0;
        if (dp[i] != -1)
            return dp[i];
        int b = 1;
        for (int j = i+1;j<nums.size();j++)
            if (nums[j] > nums[i])
                b = max (b,1+rec(nums,j));
        dp[i] = b;
        return dp[i];
    }

    int lengthOfLIS(vector<int>& nums) {
        int lis = INT_MIN;
        for (int i=0;i<nums.size();i++)
            lis = max(lis,rec(nums,i));
        return lis;
    }
};