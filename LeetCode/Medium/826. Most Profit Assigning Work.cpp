class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        int n = profit.size();
        map<int,int> m;
        for (int i = 0;i<n;i++) m[difficulty[i]] = max(m[difficulty[i]],profit[i]);
        vector<int> p(prev(m.end())->first + 1);
        int ans = 0, i = 0;
        auto j = m.begin();
        while (i < m.begin()->first) p[i++] = 0;
        for (;i<prev(m.end())->first + 1;i++) {
            p[i] = max(p[i-1],j->second);
            if (j != m.end() && i == next(j)->first) {
                j++;
                p[i] = max(p[i],j->second);
            }
        }
        for (int w : worker)
            if (w >= p.size()) ans += p[prev(m.end())->first];
            else ans += p[w];
        return ans;
    }
};