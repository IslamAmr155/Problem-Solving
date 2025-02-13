class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        priority_queue<long long, vector<long long>, greater<>> q;
        for (int& i : nums) q.push(i);
        int ans = 0;
        while (q.top() < k) {
            long long x = q.top();
            q.pop();
            long long y = q.top();
            q.pop();
            q.push(min(x,y) * 2 + max(x,y));
            ans++;
        }
        return ans;
    }
};