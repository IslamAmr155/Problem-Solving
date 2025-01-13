class Solution {
public:
    int minimumLength(string s) {
        vector<int> v(26);
        for (char c : s) v[c-'a']++;
        int ans = 0;
        for (int& x : v)
            if (x % 2) ans++;
            else ans += min(x, 2);
        return ans;
    }
};