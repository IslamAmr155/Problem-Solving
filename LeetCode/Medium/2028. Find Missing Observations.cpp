class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int sum = accumulate(rolls.begin(), rolls.end(), 0), dif = mean * (n + rolls.size()) - sum;
        if (1.0 * dif / n > 6 || dif / n == 0 || dif <= 0) return {};
        vector<int> ans(n, dif/n);
        dif %= n;
        for (int i = 0;i<dif;i++) ans[i]++;
        return ans;
    }
};