class Solution {
public:
    string customSortString(string order, string s) {
        vector<int> f(26);
        for (char c : s) f[c-'a']++;
        string ans = "";
        for (char c : order) 
            while(f[c-'a']--) ans += c;
        for (int i = 0;i<26;i++) 
            while(f[i]-- > 0) 
                ans += 'a'+i;
        return ans;
    }
};