class Solution {
public:
    int rec(vector<int>& cost,int i,vector<int>& dp)
    {
        if (i >= cost.size())
            return 0;
        if (dp[i] != -1)
            return dp[i];
        int c1 = cost[i] + rec(cost,i+1,dp);
        int c2 = cost[i] + rec(cost,i+2,dp);
        dp[i] = min(c1,c2);
        return dp[i];
    }

    int minCostClimbingStairs(vector<int>& cost) {
        vector<int> dp(cost.size()+1,-1);
        return min(rec(cost,0,dp),rec(cost,1,dp));
    }
};