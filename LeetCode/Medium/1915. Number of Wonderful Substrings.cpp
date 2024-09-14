class Solution {
public:
    long long wonderfulSubstrings(string word) {
        long long ans = 0, m = 0;
        vector<int> v(1024);
        v[0] = 1;
        for (char c : word) {
            m ^= 1 << (c-'a');
            ans += v[m];
            for (int i = 0;i<10;i++) ans += v[m ^ (1 << i)];
            v[m]++;
        }
        return ans;
    }
};