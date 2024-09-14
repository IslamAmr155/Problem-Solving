class Solution {
public:
    vector<vector<string>> ans;

    void rec(string& s,int b,vector<string>& v) {
        if (b == s.size()) {
            ans.push_back(v);
            return;
        }
        for (int i = b;i<s.size();i++) {
            int j = b, k = i;
            while (j < k && s[j] == s[k]) {
                j++;
                k--;
            }
            if (j >= k) {
                v.push_back(s.substr(b,i - b + 1));
                rec(s,i+1,v);
                v.pop_back();
            }
        }
    }

    vector<vector<string>> partition(string s) {
        vector<string> v;
        rec(s,0,v);
        return ans;
    }
};