class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        stringstream ss(s1), st(s2);
        string word;
        vector<string> ans;
        unordered_map<string, int> m;
        while (ss >> word) m[word]++;
        while (st >> word) m[word]++;
        for (auto i = m.begin();i != m.end();i++)
            if (i->second == 1) ans.push_back(i->first);
        return ans;
    }
};