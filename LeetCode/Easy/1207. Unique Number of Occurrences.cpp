class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> m;
        for (int x : arr)
            m[x]++;
        set<int> s;
        for (auto i = m.begin(); i != m.end(); i++)
        {
            if (s.find(i->second) != s.end())
                return false;
            s.insert(i->second);
        }
        return true;
    }
};