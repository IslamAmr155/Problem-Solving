class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        vector<int> v(100);
        int ans = 0;
        for (vector<int>& d : dominoes) {
            ans += v[d[0]*10+d[1]];
            v[d[0]*10+d[1]]++;    
            if (d[0] != d[1]) v[d[1]*10+d[0]]++;
        }
        return ans;
    }
};