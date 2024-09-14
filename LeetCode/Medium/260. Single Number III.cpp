class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unsigned int temp = 0;
        for (int x : nums) temp ^= x;
        temp &= -temp;
        vector<int> ans = {0,0};
        for (int x : nums)
            if ((temp & x) == 0) ans[0] ^= x;
            else ans[1] ^= x;
        return ans;
    }
};