class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        if (n == 1)
            return {0};
        vector<int> ans(n);
        stack<pair<int,int>> q;
        int x = 0;
        for (int i=n-1;i>=0;i--)
        {
            while (!q.empty() && q.top().first <= temperatures[i])
                q.pop();
            ans[i] = (q.empty() == true) ? 0 : q.top().second-i;
            q.push({temperatures[i],i});
        }
        return ans;
    }
};