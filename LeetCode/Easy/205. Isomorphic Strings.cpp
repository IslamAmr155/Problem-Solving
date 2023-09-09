class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,int> v,x;
        int n = s.size();
        for (int i=0;i<n;i++)
        {
            if (v[s[i]] && v[s[i]] != t[i]-' ')
                return false;
            if (x[t[i]] && x[t[i]] != s[i]-' ')
                return false;
            v[s[i]] = t[i]-' ';
            x[t[i]] = s[i]-' ';
        }
        return true;
    }
};