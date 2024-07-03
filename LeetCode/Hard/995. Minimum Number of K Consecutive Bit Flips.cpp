class Solution {
public:
    int minKBitFlips(vector<int>& nums, int k) {
        queue<int> q;
        int ans = 0;
        for (int i = 0;i<nums.size();i++) {
            if ((nums[i] == 0 && q.size() % 2 == 0) || (nums[i] == 1 && q.size() % 2 == 1)) {
                ans++;
                q.push(i + k - 1);
            }
            if (!q.empty() && i >= q.front()) q.pop();
        }
        return q.empty() ? ans : -1;
    }
};