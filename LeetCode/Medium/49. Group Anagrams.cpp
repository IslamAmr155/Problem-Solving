class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> m;
        for (string s : strs)
        {
            string t = s;
            sort(t.begin(), t.end());
            m[t].emplace_back(s);
        }
        vector<vector<string>> ans;
        for (auto i : m)
            ans.emplace_back(i.second);
        return ans;
    }
};