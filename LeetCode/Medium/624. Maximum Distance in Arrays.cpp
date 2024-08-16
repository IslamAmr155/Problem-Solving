class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        int n = arrays.size(), ans = 0, ma = arrays[0][arrays[0].size() - 1], mi = arrays[0][0];
        for (int i = 1; i < n;i++) {
            ans = max(max(ans, abs(ma - arrays[i][0])), abs(arrays[i][arrays[i].size() - 1] - mi));
            ma = max(ma, arrays[i][arrays[i].size() - 1]);
            mi = min(mi, arrays[i][0]);
        }
        return ans;
    }
};