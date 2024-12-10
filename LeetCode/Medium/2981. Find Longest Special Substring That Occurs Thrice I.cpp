class Solution {
public:
    int maximumLength(string s) {
        int ans = -1, len = 1;
        unordered_map<string, int> m;
        unordered_map<char, int> n;
        string t;
        for (int i = 0;i<s.size();i++) {
            n[s[i]]++;
            if (n[s[i]] >= 3) ans = max(ans,1);
            t = s[i];
            len = 1;
            for (int j = i;j<s.size();j++)
                if (s[j] == s[j+1]) {
                    t += s[i];
                    m[t]++;
                    len++;
                    if (m[t] >= 3) ans = max(ans,len);
                } else break;
        }
        return ans;
    }
};