class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> m(26), ans;
        for (int i = 0;i<s.size();i++) m[s[i]-'a'] = i;
        int c = 0, j;
        for (int i = 0;i<s.size();i++) {
            c = 1, j = m[s[i] - 'a'];
            while (i < j) {
                i++, c++;
                if (m[s[i]-'a'] > j) j = m[s[i]-'a'];
            }
            ans.push_back(c);
        }
        return ans;
    }
};