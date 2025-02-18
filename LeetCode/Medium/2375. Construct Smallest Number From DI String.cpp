class Solution {
public:
    bool dfs(string& pattern, vector<bool>& v, string s, string& ans, int i) {
        if (s.size() == pattern.size() + 1) {
            ans = s;
            return true;
        }
        if (pattern[i] == 'I') {
            for (int j = s[s.size() - 1]-'0'+1;j<=9;j++)
                if (!v[j]) {
                    v[j] = 1;
                    if (dfs(pattern, v, s+to_string(j), ans, i+1)) return true;
                    v[j] = 0;
                }
        } else {
            for (int j = s[s.size() - 1]-'0'-1;j>0;j--)
                if (!v[j]) {
                    v[j] = 1;
                    if (dfs(pattern, v, s+to_string(j), ans, i+1)) return true;
                    v[j] = 0;
                }
        }
        return false;
    }

    string smallestNumber(string pattern) {
        vector<bool> v(9);
        string ans = "";
        for (int i = 1;i<=9;i++) {
            v[i] = 1;
            if (dfs(pattern, v, to_string(i), ans, 0)) break;
            v[i] = 0;
        }
        return ans;
    }
};