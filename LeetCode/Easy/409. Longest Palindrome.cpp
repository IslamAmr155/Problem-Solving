class Solution {
public:
    int longestPalindrome(string s) {
        map<char,int> m;
        for (char c : s) m[c]++;
        int ans = 0;
        for (auto i=m.begin();i != m.end();i++) {
            if (i->second % 2) ans |= 1;
            ans += i->second & (INT_MAX - 1);
        }
        return ans;
    }
};