class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        unordered_map<int,int> m;
        m[0] = -1;
        int rem = 0, ans = nums.size(), cur = 0;
        for (int& x : nums) rem = (rem + x) % p;
        for (int i = 0;i<nums.size();i++) {
            cur = (cur + nums[i]) % p;
            m[cur] = i;
            if (m.count((cur - rem + p) % p))
                ans = min(ans, i - m[(cur - rem + p) % p]);
        }
        return ans == nums.size() ? -1 : ans;
    }
};