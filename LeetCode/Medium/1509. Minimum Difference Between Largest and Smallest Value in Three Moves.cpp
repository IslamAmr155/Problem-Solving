class Solution {
public:
    int minDifference(vector<int>& nums) {
        if (nums.size() <= 3) return 0;
        sort(nums.begin(),nums.end());
        int i = 0, ans = INT_MAX, n = nums.size() - 1;
        while (i < 2) {
            ans = min(ans,nums[n - 3 + i] - nums[i]);
            ans = min(ans,nums[n - i] - nums[3-i]);
            i++;
        }
        return ans;
    }
};