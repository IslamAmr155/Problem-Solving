class Solution {
public:
    long long countInterestingSubarrays(vector<int>& nums, int modulo, int k) {
        long long ans = 0;
        unordered_map<int,int> m;
        m[0]++;
        int s = 0;
        for (int i = 0;i<nums.size();i++) {
            s += nums[i] % modulo == k;
            ans += m[(s - k + modulo) % modulo];
            m[s % modulo]++;
        }
        return ans;
    }
};