class Solution {
public:
    vector<string> ans;

    void rec(string& s,set<string>& st, int i, string v) {
        if (i >= s.size()) {
            v.pop_back();
            ans.push_back(v);
            return;
        }
        string t = "";
        for (int j = 1;j<=s.size()-i;j++) {
            t = s.substr(i,j);
            if (st.find(t) != st.end()) {
                rec(s,st,i+j,v + t + " ");
            }
        }
    }

    vector<string> wordBreak(string s, vector<string>& wordDict) {
        set<string> st;
        for (string w : wordDict) st.insert(w);
        rec(s,st,0,"");
        return ans;
    }
};