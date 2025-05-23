class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        long long sum = accumulate(nums.begin(), nums.end(), 0LL), ans = 0, c = 0;
        for (int i = 0;i<nums.size() - 1;i++) {
            c += nums[i];
            if (c >= sum - c) ans++;
        }
        return ans;
    }
};