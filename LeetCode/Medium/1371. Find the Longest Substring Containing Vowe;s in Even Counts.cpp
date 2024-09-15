class Solution {
public:
    int findTheLongestSubstring(string s) {
        set<char> t = {'a','e','i','o','u'};
        map<int,int> m = {{0,-1}};
        int ans = 0, p = 0;
        for (int i = 0;i<s.size();i++) {
            if (t.find(s[i]) != t.end()) p ^= s[i];
            if (!m.count(p)) m[p] = i;
            ans = max(ans, i - m[p]);
        }
        return ans;
    }
};