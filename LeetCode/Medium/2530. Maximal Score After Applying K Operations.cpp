class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        priority_queue<int> q;
        for (int& x:nums) q.push(x);
        long long ans = 0, x;
        while (k--) {
            x = q.top();
            q.pop();
            ans += x;
            q.push(ceil(x / 3.0));
        }
        return ans;
    }
};