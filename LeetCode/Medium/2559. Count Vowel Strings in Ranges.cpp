class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        int n = words.size(), m = queries.size();
        vector<int> v(n+1), ans(m);
        set<char> s = {'a', 'e', 'i', 'o', 'u'};
        for (int i = 1;i<=n;i++) {
            int e = words[i-1].size() - 1;
            v[i] = v[i-1] + (s.find(words[i-1][0]) != s.end() && s.find(words[i-1][e]) != s.end());
        }
        for (int i = 0;i<m;i++) ans[i] = v[queries[i][1]+1] - v[queries[i][0]];
        return ans; 
    }
};