class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        vector<pair<int,int>> v;
        for (int i = 0;i < profits.size();i++)
            v.push_back({capital[i],profits[i]});
        sort(v.begin(),v.end());
        priority_queue<int> q;
        int p = 0, i = 0;
        while (p != k)
        {
            for (;i < v.size() && w >= v[i].first;i++)
                q.push(v[i].second);
            if (!q.empty())
            {
                w += q.top();
                q.pop();
            }
            p++;
        }
        return w;
    }
};