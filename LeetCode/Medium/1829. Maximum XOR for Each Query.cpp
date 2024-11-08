class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        vector<int> ans;
        int num = 0, limit = pow(2, maximumBit);
        for (int& x : nums) num ^= x;
        for (int i = nums.size() - 1;i >= 0;i--) {
            int temp = num, k = 0;
            while (1) {
                int c = (temp+1) & ~temp;
                if (c >= limit) break;
                k ^= c;
                temp ^= c;
            }
            ans.push_back(k);
            num ^= nums[i];
        }
        return ans; 
    }
};