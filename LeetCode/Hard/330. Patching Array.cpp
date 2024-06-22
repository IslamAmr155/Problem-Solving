class Solution {
public:
    int minPatches(vector<int>& nums, int n) {
        long long cur = 1, ans = 0, i = 0;
        while (n >= cur) {
            if (i < nums.size() && nums[i] <= cur) {
                cur += nums[i];
                i++;
            }
            else {
                cur *= 2;
                ans++;
            }
        }
        return ans;
    }
};