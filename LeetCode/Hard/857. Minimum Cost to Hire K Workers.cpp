class Solution {
public:
    struct greaterd {
        bool operator()(const pair<double,int> & a,const pair<double,int>& b) const { return a.first > b.first; }
    };

    double mincostToHireWorkers(vector<int>& quality, vector<int>& wage,
                                int k) {
        priority_queue<pair<double, int>, vector<pair<double, int>>, greaterd> pq;
        for (int i = 0; i < quality.size(); i++)
            pq.push({1.0 * wage[i] / quality[i], quality[i]});
        priority_queue<int> q;
        double ans = 0, cur = 0;
        while (k--) {
            ans += pq.top().second;
            q.push(pq.top().second);
            if (!k) {
                cur = ans;
                ans *= pq.top().first;
            }
            pq.pop();
        }
        while (pq.size()) {
            cur -= q.top();
            q.pop();
            cur += pq.top().second;
            q.push(pq.top().second);
            ans = min(ans, cur * pq.top().first);
            pq.pop();
        }
        return ans;
    }
};