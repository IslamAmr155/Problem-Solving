class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        priority_queue<int, vector<int>, greater<int>> q;
        int ans = 1;
        for (auto& v: intervals) {
            if (!q.empty() && v[0] <= q.top()) ans++;
            else if (!q.empty()) q.pop();  
            q.push(v[1]);
        }
        return ans;
    }
};