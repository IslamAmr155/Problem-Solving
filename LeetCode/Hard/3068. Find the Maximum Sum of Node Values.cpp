class Solution {
public:
    long long maximumValueSum(vector<int>& nums, int k, vector<vector<int>>& edges) {
        long long ans = 0, count = 0, lost = INT_MAX;
        for (long long x : nums) {
            ans += max(x ^ k, x);
            count += (x ^ k) > x;
            lost = min(lost, abs(x - (x ^ k)));
        }
        return ans - (count % 2 ? lost : 0);
    }
};