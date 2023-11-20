class Solution {
public:
    vector<string> ans;

    void rec(string s, int& n,int i,int j)
    {
        if (s.size() == 2*n)
        {
            ans.push_back(s);
            return;
        }
        if (i < n)
            rec(s+"(",n,i+1,j);
        if (j < i)
            rec(s+")",n,i,j+1);
    }

    vector<string> generateParenthesis(int n) {
        rec("",n,0,0);
        return ans;
    }
};