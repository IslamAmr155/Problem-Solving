class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        unordered_map<int,int> m;
        long long ans = 0, n = nums.size();
        for (int i = 0;i<n;i++) m[nums[i] - i]++;
        for (int i = 0;i<n;i++) {
            m[nums[i] - i]--;
            ans += m[nums[i] - i];
        }
        return (n*(n-1)/2) - ans;
    }
};