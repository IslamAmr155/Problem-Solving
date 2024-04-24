class Solution {
public:
    int openLock(vector<string>& deadends, string target) {
        set<string> st, visited;
        int ans = 0;
        for (string s : deadends) st.insert(s);
        queue<string> q;
        q.push("0000");
        visited.insert("0000");
        int n = q.size();
        while (q.size())
        {
            n = q.size();
            while (n--)
            {
                string t = q.front();
                q.pop();
                if (t == target) return ans;
                if (st.find(t) != st.end()) continue;
                for (int i = 0;i<4;i++)
                {
                    string temp;
                    temp = t.substr(0,i) + (char)((t[i] == '9')? '0' : t[i] + 1) + t.substr(i+1);
                    if (visited.find(temp) == visited.end() && st.find(temp) == st.end())
                    {
                        visited.insert(temp);
                        q.push(temp);
                    }
                    temp = t.substr(0,i) + (char)((t[i] == '0')? '9' : t[i] - 1) + t.substr(i+1);
                    if (visited.find(temp) == visited.end() && st.find(temp) == st.end())
                    {
                        visited.insert(temp);
                        q.push(temp);
                    }
                } 
            }
            ans++;
        }
        return -1;
    }
};