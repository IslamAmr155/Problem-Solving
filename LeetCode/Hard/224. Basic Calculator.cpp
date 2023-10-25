class Solution {
public:
    pair<int,int> rec(string& s, int i)
    {
        int n = s.size(), add = -1;
        stack<int> st;
        while (i < n)
        {
            if (s[i] == '(')
            {
                pair<int,int> p = rec(s,i+1);
                int tot = 0;
                if (!st.empty())
                {
                    tot = st.top();
                    st.pop();
                }
                if (add)
                    st.push(tot + p.first);
                else
                    st.push(tot - p.first);
                add = -1;
                i = p.second;
            }
            else if (s[i] == ')')
                return {st.top(),i};
            else if (s[i] == '+')
                add = 1;
            else if (s[i] == '-')
                add = 0;
            else if (s[i] == ' ')
            {
                i++;
                continue;
            }
            else
            {
                int num = 0, tot = 0;
                if (!st.empty())
                {
                    tot = st.top();
                    st.pop();
                }
                while (i < n && (s[i] - '0' >= 0))
                {
                    num *= 10;
                    num += s[i] - '0';
                    i++;
                }
                i--;
                if (add == 1)
                    st.push(tot + num);
                else if (add == 0)
                    st.push(tot - num);
                else
                    st.push(num);
                add = -1;
            }
            i++;
        }
        return {st.top(),i};
    }

    int calculate(string s) {
        return rec(s,0).first;
    }
};