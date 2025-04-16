class Solution {
public:
    long long countGood(vector<int>& nums, int k) {
        long long ans = 0;
        unordered_map<int,int> m;
        for (int i = 0, j = 0;i<nums.size();i++) {
            k -= m[nums[i]];
            m[nums[i]]++;
            while (k <= 0) {
                ans += nums.size() - i;
                m[nums[j]]--;
                k += m[nums[j]];
                j++;
            }
        }
        return ans;
    }
};