class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> v = arr;
        sort(v.begin(), v.end());
        unordered_map<int,int> m;
        int r = 1;
        for (int& x:v) 
            if (!m.count(x)) m[x] = r++;
        for (int i = 0;i<arr.size();i++) arr[i] = m[arr[i]];
        return arr;
    }
};