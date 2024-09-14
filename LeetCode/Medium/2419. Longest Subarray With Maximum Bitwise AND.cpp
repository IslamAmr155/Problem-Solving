class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int m = *max_element(nums.begin(), nums.end()), ans = 1, c = 0;
        for (int x : nums) 
            if (m == x) c++, ans = max(ans, c);
            else c = 0;
        return ans;
    }
};