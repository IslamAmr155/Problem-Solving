class Solution {
public:
    long long countSubarrays(vector<int>& nums, int miK, int maxK) {
        long long ans = 0;
        int ma = -1, mi = -1, s = -1;
        for (int i = 0; i < nums.size();i++)
        {
            if (nums[i] == miK) mi = i;
            if (nums[i] == maxK) ma = i;
            if (nums[i] < miK || nums[i] > maxK) s = i;
            ans += max(0,min(mi,ma) - s);
        }
        return ans;
    }
};