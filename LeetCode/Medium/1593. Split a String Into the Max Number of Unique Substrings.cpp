class Solution {
public:
    int ans = 0;
    unordered_set<string> t;

    void rec(string& s,int i,string c) {
        if (i == s.size()) {
            ans = max(ans,(int)t.size());
            return;
        }
        for(int j = i;j<s.size();j++) {
            c += s[j];
            if (t.contains(c)) {
                continue;
            } else {
                t.insert(c);
                rec(s,j+1,"");
                t.erase(c);
            }
        }
    }

    int maxUniqueSplit(string s) {
        rec(s,0,"");
        return ans;
    }
};