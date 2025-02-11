class Solution {
public:
    string removeOccurrences(string s, string part) {
        int n = s.size(), m = part.size();
        vector<int> v(m);
        int len = 0, i = 1;
        v[0] = 0;
        while (i < m) {
            if (part[i] == part[len]) {
                len++;
                v[i] = len;
                i++;
            }
            else {
                if (len != 0) len = v[len-1];
                else v[i++] = 0;
            }
        }
        i = 0;
        int j = 0;
        stack<char> st;
        vector<int> w(n+1);
        for (;i<n;i++) {
            st.push(s[i]);
            if (s[i] == part[j]) {
                w[st.size()] = ++j;
                if (j == m) {
                    int rem = m;
                    while (rem--) st.pop();
                }
                j = st.empty() ? 0 : w[st.size()];
            }
            else {
                if (j != 0) {
                    i--;
                    j = v[j-1];
                    st.pop();
                }
                else w[st.size()] = 0;
            }
        }
        string ans = "";
        while (!st.empty()) {
            ans = st.top() + ans;
            st.pop();
        }
        return ans;
    }
};