class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long ans = 0, c = 0, s = 0, i = 0, j = 0;
        unordered_map<int,int> m;
        for (;i<k;i++) {
            m[nums[i]]++;
            if (m[nums[i]] == 2) c++;
            s += nums[i];
        }
        if (!c) ans = s;
        for (;i<nums.size();i++,j++) {
            s -= nums[j];
            m[nums[j]]--;
            if (m[nums[j]] == 1) c--;
            s += nums[i];
            m[nums[i]]++;
            if (m[nums[i]] == 2) c++;
            if (!c) ans = max(ans, s);
        }
        return ans;
    }
};