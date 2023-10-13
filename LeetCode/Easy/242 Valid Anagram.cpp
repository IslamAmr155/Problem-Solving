class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.size(), m = t.size();
        if (n != m)
            return false;
        unordered_map<char,int> a;
        for (int i=0;i<n;i++)
            a[s[i]]++;
        for (int i=0;i<n;i++)
        {
            a[t[i]]--;
            if (a[t[i]] < 0)
                return false;
        }
        return true;
    }
};