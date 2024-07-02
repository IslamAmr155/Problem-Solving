class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        priority_queue<pair<int,int>> h, l;
        int ans = 0, j = 0;
        for (int i = 0;i<nums.size();i++) {
            h.push({nums[i],i});
            l.push({-nums[i],i});
            while (h.top().first + l.top().first > limit) {
                j = min(h.top().second,l.top().second) + 1;
                while (h.top().second < j) h.pop();
                while (l.top().second < j) l.pop();
            }
            ans = max(ans, i - j + 1);
        }
        return ans;
    }
};