class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        queue<int> q;
        int ans = 0, prev = -1;
        for (int i = 0;i<nums.size();i++) {
            if (nums[i] % 2) {
                if (q.size() == k) q.pop();
                q.push(i - prev);
                prev = i;
            }
            if (q.size() == k) {
                ans += q.front();
            }
        }
        return ans;
    }
};