class Solution {
public:
    bool canConstruct(string s, int k) {
        if (s.size() < k) return false;
        vector<int> v(26);
        for (char& c : s) v[c-'a']++;
        int c = 0;
        for (int& x : v)
            if (x % 2) c++;
        return c <= k;
    }
};