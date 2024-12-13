class Solution {
public:
    long long findScore(vector<int>& nums) {
        priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> q;
        long long ans = 0;
        int n = nums.size();
        for (int i = 0;i<n;i++) q.push({nums[i], i});
        while (!q.empty()) {
            vector<int> v = q.top();
            q.pop();
            if (nums[v[1]] == -1) continue;
            ans += v[0];
            nums[v[1]] = -1;
            nums[max(0,v[1] - 1)] = -1;
            nums[min(n-1,v[1]+1)] = -1;
        }
        return ans;
    }
};