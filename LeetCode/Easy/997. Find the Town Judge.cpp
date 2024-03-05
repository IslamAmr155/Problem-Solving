class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<pair<int,int>> v(n+1);
        for (vector<int> x : trust)
        {
            v[x[0]].first++;
            v[x[1]].second++;
        }
        for (int i = 1;i<=n;i++)
            if (v[i].first == 0 && v[i].second == n - 1) return i;
        return -1;
    }
};