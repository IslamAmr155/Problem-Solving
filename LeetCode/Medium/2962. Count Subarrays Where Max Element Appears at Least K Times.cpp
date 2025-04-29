class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        long long ans = 0;
        int ma = *max_element(nums.begin(), nums.end());
        int c = 0, n = nums.size();
        for (int i = 0,j=0;j<n;j++) {
            c += nums[j] == ma;
            while (c >= k) {
                ans += n - j;
                c -= nums[i++] == ma;
            }
        }
        return ans;
    }
};