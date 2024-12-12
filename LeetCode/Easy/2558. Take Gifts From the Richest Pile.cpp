class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<int> q;
        for (int&x : gifts) q.push(x);
        while (k--) q.push(sqrt(q.top())), q.pop();
        long long ans = 0;
        while (!q.empty()) ans += q.top(), q.pop();
        return ans;
    }
};