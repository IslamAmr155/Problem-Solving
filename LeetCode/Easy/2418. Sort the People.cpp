class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int n = names.size();
        vector<pair<int,string>> v(n);
        for (int i = 0;i<n;i++) v[i] = {heights[i],names[i]};
        sort(v.begin(), v.end(), [] (const pair<int,string> &a, const pair<int,string> &b) {return a.first > b.first;});
        vector<string> ans(n);
        for (int i = 0;i<n;i++) ans[i] = v[i].second;
        return ans;
    }
};