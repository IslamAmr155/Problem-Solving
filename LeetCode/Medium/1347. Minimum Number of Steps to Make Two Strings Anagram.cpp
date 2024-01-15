class Solution {
public:
    int minSteps(string s, string t) {
        vector<int> v(26);
        for (int i = 0;i<s.size();i++)
        {
            v[s[i]-'a']++;
            v[t[i]-'a']--;
        }
        int ans = 0;
        for (int i = 0;i<26;i++)
            if (v[i] > 0)
                ans += v[i];
        return ans;
    }
};