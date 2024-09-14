class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        vector<int> v(26);
        for (char c : allowed) v[c-'a']++;
        int ans = 0;
        for (string s : words) {
            ans++;
            for (char c : s) 
                if (!v[c-'a']) {
                    ans--; break;
                }
        } 
        return ans;
    }
};