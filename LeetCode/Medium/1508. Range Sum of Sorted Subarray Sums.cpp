class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector<int> v(n * (n+1) / 2);
        int k = 0, mod = 1e9 + 7, ans = 0;
        for (int i = 0;i<n;i++) {
            v[k++] = nums[i];
            for (int j = i+1;j<n;j++) v[k++] = (v[k-1] + nums[j]) % mod;
        }
        sort(v.begin(),v.end());
        for (int i = left-1;i<right;i++) ans = (ans + v[i]) % mod;
        return ans;
    }
};