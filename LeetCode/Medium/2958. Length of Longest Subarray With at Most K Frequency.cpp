class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        int j = 0, ans = 0;
        for (int i = 0;i<nums.size();i++)
        {
            m[nums[i]]++;
            while (m[nums[i]] > k)
                m[nums[j++]]--;
            ans = max(ans, i - j + 1);
        }
        return ans;
    }
};