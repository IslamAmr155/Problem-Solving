class Solution {
public:
    void rec(stack<char>& st,string& s,int& i) {
        stack<char> temp;
        i++;
        for (;i<s.size();i++) {
            if (s[i] == '(') rec(temp,s,i);
            else if (s[i] != ')') temp.push(s[i]);
            else break;
        }
        while (temp.size()) {
            st.push(temp.top());
            temp.pop();
        }
    }

    string reverseParentheses(string s) {
        stack<char> st;
        for (int i=0;i<s.size();i++) {
            if (s[i] == '(') rec(st,s,i);
            else if (s[i] != ')') st.push(s[i]);
        }
        string ans = "";
        while (st.size()) {
            ans = st.top() + ans;
            st.pop();
        }
        return ans;
    }
};