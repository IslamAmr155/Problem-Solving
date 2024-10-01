class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        unordered_map<int,int> m;
        for (int x : arr) {
            x %= k;
            if (x < 0) x += k;
            m[x]++;
        }
        if (m[0] % 2 == 0) m.erase(0);
        for (auto i = m.begin();i != m.end();i++) 
            if (m[k - i->first] != i->second) return false;
        return true;
    }
};