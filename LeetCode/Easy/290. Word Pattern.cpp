class Solution {
public:
    bool wordPattern(string pattern, string s) {
        int n = pattern.size(), a = s.size(), j = 0;
        unordered_map<char,string> m;
        vector<string> v;
        string w = "";
        for (int i=0;i<n;i++)
        {
            while (j < a && s[j] != ' ')
                w += s[j++];
            if (m[pattern[i]] == "" && find(v.begin(),v.end(),w) == v.end())
            {
                m[pattern[i]] = w;
                v.push_back(w);
            }
            else if (m[pattern[i]] != w)
                return false;
            if ((j == a && i != n - 1) || (j != a && i == n - 1))
                return false;
            w = "";
            j++;
        }
        return true;
    }
};