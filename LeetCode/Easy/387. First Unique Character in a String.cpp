class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> v(26);
        queue<pair<char,int>> q;
        for (int i = 0;i<s.size();i++)
        {
            v[s[i]-'a']++;
            if (v[s[i]-'a'] == 1)
                q.push({s[i],i});
            else
            {
                while (!q.empty() && v[q.front().first-'a'] > 1)
                    q.pop();
            }
        }
        if (q.empty())
            return -1;
        return q.front().second;
    }
};