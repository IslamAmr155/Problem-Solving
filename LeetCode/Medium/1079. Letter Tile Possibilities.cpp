class Solution {
public:
    int dfs(vector<int>& c) {
        int ans = 0;
        for (int i = 0;i<26;i++) {
            if (!c[i]) continue;
            c[i]--;
            ans++;
            ans += dfs(c);
            c[i]++;
        }
        return ans;
    }

    int numTilePossibilities(string tiles) {
        vector<int> c(26);
        for (char t : tiles) c[t-'A']++;
        return dfs(c);
    }
};