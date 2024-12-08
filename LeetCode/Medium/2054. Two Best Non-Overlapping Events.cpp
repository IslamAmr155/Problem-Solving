class Solution {
public:
    int maxTwoEvents(vector<vector<int>>& events) {
        priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> pq;
        for (vector<int>& e : events) {
            pq.push({e[0], e[2]});
            pq.push({e[1]+1, -e[2]});
        }
        int m = 0, ans = 0;
        while (!pq.empty()) {
            vector<int> v = pq.top();
            pq.pop();
            cout << v[0] << " " << v[1] << endl;
            if (v[1] > 0) ans = max(ans, m+v[1]);
            else m = max(m,-v[1]);
        }
        return ans;
    }
};