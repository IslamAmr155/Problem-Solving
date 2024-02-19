class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> m;
        for (char c : s) m[c]++;
        vector<pair<char,int>> v(m.size());
        partial_sort_copy(m.begin(),m.end(),v.begin(),v.end(), [](auto a,auto b) { return a.second>b.second; } );
        string ans = "";
        for (auto &p : v)
            for (int i = 0;i<p.second;i++) 
                ans += p.first;
        return ans;
    }
};