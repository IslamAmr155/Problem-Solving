class Solution {
public:
    bool isPathCrossing(string path) {
        set<pair<int,int>> s;
        map<char,pair<int,int>> m = {{'N',{0,-1}},{'S',{0,1}},{'E',{1,0}}, {'W',{-1,0}}};
        s.insert({0,0});
        int i = 0, j = 0;
        for (char c : path)
        {
            i += m[c].first;
            j += m[c].second;
            if (s.count({i,j})) return true;
            s.insert({i,j});
        }
        return false;
    }
};