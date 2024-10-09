class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> t;
        int ans = 0;
        for (char c : s) {
            if (c == '(') t.push(c);
            else if (!t.empty() && t.top() == '(') t.pop();
            else t.push(c);
        }
        return t.size();
    }
};