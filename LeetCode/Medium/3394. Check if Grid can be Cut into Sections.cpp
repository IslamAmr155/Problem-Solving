class Solution {
public:
    bool checkValidCuts(int n, vector<vector<int>>& rectangles) {
        map<int,int> h,v;
        for (auto& r : rectangles)
            h[r[0]+1]++, v[r[1]+1]++, h[r[2]]--, v[r[3]]--;
        int a = 0, c = 0;
        for (auto i = h.begin();i != h.end();i++) {
            a += i->second;
            if (!a) {
                c++;
                cout << i->first << endl;
            }
        }
        if (c - 1 > 1) return true;
        c = 0;
        for (auto i = v.begin();i != v.end();i++) {
            a += i->second;
            if (!a) c++;
        }
        return c - 1 > 1;
    }
};