class Solution {
public:
    vector<int> dp = vector<int>(301,-1);

    bool rec(set<string>& t,string& s,int i)
    {
        if (i == s.size()) return true;
        if (dp[i] != -1) return dp[i];
        for (int j = 1;j+i<=s.size();j++)
            if (t.count(s.substr(i,j))) 
            {
                dp[i] = rec(t,s,i+j);
                if (dp[i]) return true;
            } 
        return false;
    }  

    bool wordBreak(string s, vector<string>& wordDict) {
        set<string> t(wordDict.begin(),wordDict.end());
        return rec(t,s,0);
    }
};