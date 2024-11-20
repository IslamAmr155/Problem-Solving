class Solution {
public:
    int takeCharacters(string s, int k) {
        if (!k) return 0;
        int i = 0, j = s.size() - 1, n = s.size();
        unordered_map<char, int> m;
        for (;i<n;i++) {
            m[s[i]]++;
            if (m['a'] >= k && m['b'] >= k && m['c'] >= k) break;
        }
        if (i == n) return -1;
        int ans = i+1;
        for (;j>=0;j--) {
            m[s[j]]++;
            while (i >= 0 && m[s[i]] > k) m[s[i--]]--;
            ans = min(ans, i +  n - j + 1);
            if (i == -1) break;
        }
        return ans;
    }
};