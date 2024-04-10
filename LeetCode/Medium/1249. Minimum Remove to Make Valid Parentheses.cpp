class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<int> t;
        int n = s.size();
        for (int i = 0;i<n;i++)
        {
            char c = s[i];
            if (c == '(') t.push(i);
            else if (c == ')' && !t.size()) s.erase(i--,1);
            else if (c == ')' && t.size()) t.pop();
            n = s.size();
        }
        while (t.size()) 
        {
            s.erase(t.top(),1);
            t.pop();
        }
        return s;
    }
};