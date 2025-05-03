class Solution {
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        vector<vector<int>> m (7, vector<int>(3));
        int n = tops.size();
        for (int i = 0;i<n;i++) {
            m[tops[i]][0]++, m[bottoms[i]][1]++;
            if (tops[i] == bottoms[i]) m[tops[i]][2]++;
        }
        for (vector<int>& v: m)
            if (v[0] + v[1] - v[2] == n) return min(v[0] - v[2], v[1] - v[2]);
        return -1;
    }
};