class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        map<char,int> m;
        for (char c : words[0]) m[c]++;
        for (string s : words) {
            map<char,int> n;
            for (char c : s) n[c]++;
            for (auto i = m.begin();i != m.end();i++)
                if (n[i->first] != i->second) i->second = min(n[i->first], i->second);
        }
        vector<string> ans;
        for (auto i = m.begin();i != m.end();i++) 
                while(i->second--) ans.push_back(string {i->first});
        return ans;
    }
};