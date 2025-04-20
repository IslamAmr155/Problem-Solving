class Solution {
public:
    int numRabbits(vector<int>& answers) {
        unordered_map<int,int> m;
        for (int& i : answers) m[i]++;
        int ans = 0;
        for (auto i = m.begin();i != m.end();i++)
            ans += (i->first + 1) * ceil(1.0 * i->second / (i->first + 1));
        return ans;
    }
};