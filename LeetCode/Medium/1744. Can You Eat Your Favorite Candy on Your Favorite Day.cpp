class Solution {
public:
    vector<bool> canEat(vector<int>& candiesCount, vector<vector<int>>& queries) {
        int n = candiesCount.size(), q = queries.size();
        vector<long long> c(n);
        c[0] = candiesCount[0];
        for (int i = 1;i<n;i++) c[i] = candiesCount[i] + c[i-1];
        vector<bool> ans(q);
        for (int i = 0;i<q;i++)
        {
            vector<int> v = queries[i];
            long long x = c[v[0]]; 
            if ((x-candiesCount[v[0]]) / v[2] <= v[1] && x > v[1]) ans[i] = 1;
            else ans[i] = 0;
        }
        return ans;
    }
};