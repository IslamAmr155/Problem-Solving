class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        map<int,int> m;
        for (int x : arr) m[x]++;
        vector<int> v;
        for (auto i = m.begin();i != m.end();i++) v.push_back(i->second);
        sort(v.begin(),v.end());
        int i = 0;
        while (i < v.size() && k >= v[i])
        {
            k -= v[i];
            i++;
        }
        return v.size() - i;
    }
};