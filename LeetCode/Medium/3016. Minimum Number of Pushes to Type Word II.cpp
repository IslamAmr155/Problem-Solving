class Solution {
public:
    int minimumPushes(string word) {
        vector<int> v(27);
        for (char c : word) v[c - 'a']++;
        sort(v.begin(), v.end(), greater<int>());
        int ans = 0, i = 0;
        while (v[i]) ans += v[i] * (i++/8 + 1);
        return ans; 
    }
};