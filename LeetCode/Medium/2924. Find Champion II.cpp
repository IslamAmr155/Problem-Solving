class Solution {
public:
    int findChampion(int n, vector<vector<int>>& edges) {
        set<int> s;
        for (auto& e : edges) s.insert(e[1]);
        int team = -1;
        for (int i = 0;i<n;i++) 
            if (s.find(i) == s.end()) {
                if (team == -1) team = i;
                else return -1;
            }
        return team;
    }
};