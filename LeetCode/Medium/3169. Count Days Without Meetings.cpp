class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings) {
        map<int,int> v;
        int ans = 0, c = 0, mi = 1;
        for (auto& m : meetings) {
            mi = min(mi, m[0]);
            v[m[0]]++;
            v[m[1]+1]--;
        }
        ans = mi - 1;
        for (auto i = v.begin();i != v.end();i++) {
            if (!c) ans += i->first - mi;
            c += i->second;
            mi = i->first;
        }
        ans += days - mi + 1;
        return ans;
    }
};