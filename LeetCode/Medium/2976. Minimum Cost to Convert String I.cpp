class Solution {
public:
    long long minimumCost(string source, string target, vector<char>& original, vector<char>& changed, vector<int>& cost) {
        vector<vector<long long>> g(27,vector<long long>(27,INT_MAX));
        for (int i = 0;i<original.size();i++) 
            g[original[i] - 'a'][changed[i] - 'a'] = min(g[original[i] - 'a'][changed[i] - 'a'],(long long)cost[i]);
        for (int k = 0;k<27;k++)
            for (int i = 0;i<27;i++)
                for (int j=0;j<27;j++)
                    if (g[i][k] != INT_MAX && g[k][j] != INT_MAX && g[i][j] > g[i][k] + g[k][j])
                        g[i][j] = g[i][k] + g[k][j];
        long long ans = 0;
        for (int i = 0;i<source.size();i++)
            if (source[i] != target[i]) {
                if (g[source[i] - 'a'][target[i] - 'a'] == INT_MAX) return -1;
                ans += g[source[i] - 'a'][target[i] - 'a'];
            }
        return ans;
    }
};