class Solution {
public:
    vector<string> ans;
    map<char,vector<char>> m;

    void rec(string& s,string temp,int i)
    {
        if (i == s.size())
        {
            ans.push_back(temp);
            return;
        }
        for (int j=0;j<m[s[i]].size();j++)
            rec(s,temp+m[s[i]][j],i+1);
    }

    vector<string> letterCombinations(string digits) {
        if (digits.size() == 0)
            return {};
        m['2'] = {'a','b','c'};
        m['3'] = {'d','e','f'};
        m['4'] = {'g','h','i'};
        m['5'] = {'j','k','l'};
        m['6'] = {'m','n','o'};
        m['7'] = {'p','q','r','s'};
        m['8'] = {'t','u','v'};
        m['9'] = {'w','x','y','z'};
        rec(digits,"",0);
        return ans;
    }
};