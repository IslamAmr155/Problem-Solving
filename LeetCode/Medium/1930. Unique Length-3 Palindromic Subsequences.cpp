class Solution {
public:
    int countPalindromicSubsequence(string s) {
        vector<int> first(26, INT_MAX-1), last(26);
        int ans = 0;
        for (int i = 0;i<s.size();i++) {
            first[s[i] - 'a'] = min(i, first[s[i] - 'a']);
            last[s[i] - 'a'] = i;
        }
        for (int i = 0;i<26;i++) {
            vector<bool> b(26);
            for (int j = first[i]+1;j < last[i];j++) {
                if (!b[s[j] - 'a']) {
                    b[s[j] - 'a'] = 1;
                    ans++;
                } 
            }
        }
        return ans;
    }
};