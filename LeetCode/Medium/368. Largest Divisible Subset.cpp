class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        vector<int> dp(n,0), p(n,0), ans;
        int m = 0, idx = -1;
        for (int i = 0;i < n;i++)
        {
            dp[i] = 1;
            p[i] = -1;
            for (int j = i-1;j>=0;j--)
            {
                if (nums[i] % nums[j] == 0)
                    if (1 + dp[j] > dp[i])
                    {
                        dp[i] = dp[j] + 1;
                        p[i] = j;
                    }
            }
            if (dp[i] > m)
            {
                m = dp[i];
                idx = i;
            }
        }
        while (idx != -1)
        {
            ans.push_back(nums[idx]);
            idx = p[idx];
        }
        return ans;
    }
};