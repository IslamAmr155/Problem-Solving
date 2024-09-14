class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        vector<long long> v(n);
        for (auto x : roads) {
            v[x[0]]++;
            v[x[1]]++;
        }
        sort(v.begin(),v.end());
        long long ans = 0;
        for (int i = 1;i<=n;i++) ans += v[i-1] * i;
        return ans;
    }
};