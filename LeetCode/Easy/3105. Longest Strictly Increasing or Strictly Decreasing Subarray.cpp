class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int ans = 1, c = 1, s = 0, k = 0;
        for (int i = 0;i<nums.size() - 1;i++) {
            k = nums[i] - nums[i+1];
            if (k == 0) {
                s = 0;
                ans = max(ans,c);
                c = 1;
            }
            else if (!s) {
                if (k > 0) s = 1;
                else s = -1;
                c = 2;
            } else {
                if (s * k < 0) {
                    s *= -1;
                    ans = max(ans,c);
                    c = 1;
                }
                c++;
            }
        }
        return max(ans,c);
    }
};