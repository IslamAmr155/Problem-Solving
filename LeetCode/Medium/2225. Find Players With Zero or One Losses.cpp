class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        map<int,pair<int,int>> p;
        for (int i = 0;i<matches.size();i++)
        {
            p[matches[i][0]].first++;
            p[matches[i][1]].first++;
            p[matches[i][0]].second++;
        }  
        vector<vector<int>> ans(2);
        for (auto i = p.begin(); i != p.end(); i++)
            if (i->second.first == i->second.second)
                ans[0].push_back(i->first);
            else if (i->second.first == i->second.second + 1)
                ans[1].push_back(i->first);
        return ans;
    }
};