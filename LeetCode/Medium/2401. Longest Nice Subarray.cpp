class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        int c = 0, b = 0, s = 0, ans = 0;
        for (int i = 0,j = 0;j<nums.size();j++) {
            b |= nums[j];
            s += nums[j];
            c++;
            if (b == s) ans = max(ans,c);
            else {
                while (b != s) {
                    s -= nums[i];
                    b &= ~nums[i];
                    b |= nums[j];
                    i++;
                    c--;
                }
            }
        }
        return ans;
    }
};