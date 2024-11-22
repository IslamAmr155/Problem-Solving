class Solution {
public:
    int maxEqualRowsAfterFlips(vector<vector<int>>& matrix) {
        map<vector<int>, int> m;
        int ans = INT_MIN;
        for (auto& r : matrix) {
            vector<int> v = {1};
            for (int i = 1;i<r.size();i++) 
                if (r[i] != r[i-1]) v.push_back(v[i-1] * -1);
                else v.push_back(v[i-1]);
            ans = max(ans, ++m[v]);
        }
        return ans;
    }
};