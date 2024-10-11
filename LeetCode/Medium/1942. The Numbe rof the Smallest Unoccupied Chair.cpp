class Solution {
public:
    int smallestChair(vector<vector<int>>& times, int targetFriend) {
        vector<vector<int>> v;
        for (int i = 0;i<times.size();i++)
            v.push_back({times[i][0], times[i][1], i}); 
        sort(v.begin(), v.end());
        priority_queue <vector<int>, vector<vector<int>>, greater<vector<int>>> q;
        priority_queue <int, vector<int>, greater<int>> cq;
        int c = 0, i = 0;
        cq.push(c);
        while (1) {
            while (!q.empty() && q.top()[0] <= v[i][0]) {
                cq.push(q.top()[1]);
                q.pop();
            }
            if (q.empty() || q.top()[0] > v[i][0]) {
                q.push({v[i][1], cq.top()});
                if (v[i][2] == targetFriend) return cq.top(); 
                i++;
                cq.pop();
                cq.push(++c);
            }
        }
        return 0;
    }
};