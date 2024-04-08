class Solution {
public:
    int maxDepth(string s) {
        stack<char> t;
        int ans = 0;
        for (int c : s)
        {
            if (c == '(') t.push(c);
            else if (c == ')') t.pop();
            ans = max(ans,(int)t.size());
        }
        return ans;
    }
};