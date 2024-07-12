class Solution {
public:
    int maximumGain(string s, int x, int y) {
        int h,l,ans = 0;
        string sh,sl;
        if (x > y) h = x, l = y, sh = "ab", sl = "ba";
        else h = y, l = x, sh = "ba", sl = "ab";
        stack<char> st;
        for (int i = 0;i<s.size();i++) {
            if (!st.empty() && st.top() == sh[0] && s[i] == sh[1]) {
                ans += h;
                st.pop();
            }
            else st.push(s[i]);
        }
        if (st.empty()) return ans;
        stack<char> temp;
        temp.push(st.top());
        st.pop();
        while (st.size()) {
            if (!temp.empty() && st.top() == sl[0] && temp.top() == sl[1]) {
                ans += l;
                st.pop();
                temp.pop();
            }
            else { 
                temp.push(st.top());
                st.pop();
            }
        }
        return ans;
    }
};