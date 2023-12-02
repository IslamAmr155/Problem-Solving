class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        vector<int> f(26);
        for (char c : chars)
            f[c-'a']++;
        vector<int> v(26);
        int ans = 0, x;
        for (string s : words)
        {
            for (char c : s)
            {
                x = c - 'a';
                v[x]++;
                if (v[x] > f[x])
                    break;
            }
            if (v[x] <= f[x])
                ans += s.size();
            fill(v.begin(),v.end(),0);
        }
        return ans;
    }
};