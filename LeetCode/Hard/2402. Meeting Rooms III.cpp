class Solution {
public:
    int mostBooked(int n, vector<vector<int>>& meetings) {
        sort(meetings.begin(),meetings.end());
        vector<int> v(n);
        priority_queue<int, vector<int>, greater<int>> r;
        for (int i = 0;i<n;i++) r.push(i);
        priority_queue<pair<long long,int>, vector<pair<long long,int>>, greater<pair<long long,int>>> pq;
        for (vector<int> x : meetings)
        {
            int s = x[0], e = x[1];
            while (!pq.empty() && s >= pq.top().first) 
            {
                r.push(pq.top().second);
                pq.pop();
            }
            if (pq.size() != n)
            {
                pq.push({e,r.top()});
                v[r.top()]++;
                r.pop();
            }
            else
            {
                pq.push({pq.top().first+(e-s),pq.top().second});
                v[pq.top().second]++;
                pq.pop();
            }
        }
        return distance(v.begin(),max_element(v.begin(),v.end()));
    }
};