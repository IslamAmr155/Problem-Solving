class Solution {
public:
    vector<int> dp = vector<int> (1001, INT_MAX);

    vector<int> factor(int &n) {
        vector<int> v = {1};
        for (int i = 2;i<=sqrt(n);i++) 
            if (n % i == 0) v.push_back(i), v.push_back(n/i);
        return v;
    }

    int minSteps(int n) {
        if (n == 1) return 0;
        else if (n == 2) return 2;
        if (dp[n] != INT_MAX) return dp[n];
        vector<int> v = factor(n);
        for (int x : v) 
            if (x == 1) dp[n] = min(dp[n], n / x); 
            else dp[n] = min(dp[n], minSteps(x) + n / x);
        return dp[n];
    }
};