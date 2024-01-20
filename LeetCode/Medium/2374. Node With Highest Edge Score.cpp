class Solution {
public:
    int edgeScore(vector<int>& edges) {
        int n = edges.size();
        vector<long long> v(n);
        for (int i=0;i<n;i++)
            v[edges[i]] += i;
        return distance(v.begin(), max_element(v.begin(),v.end()));
    }
};