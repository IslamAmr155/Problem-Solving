class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int ans = 0, c = 1, p = 1, j = 0;
        for (int i = 0;i<nums.size();i++)
        {
            p *= nums[i];
            while (j < i && p >= k)
            {
                p /= nums[j++];
                c = max(1,--c);
            }
            if (p < k) ans += c++;
        }
        return ans;
    }
};