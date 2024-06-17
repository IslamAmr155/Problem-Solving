class Solution {
public:
    int longestIdealString(string s, int k) {
        int ans = 0, cur = 0;
        vector<int> v(26);
        for (int i = s.size()-1;i>=0;i--) {
            int temp = 0;
            int c = s[i] - 'a';
            for (int j = max(c - k,0); j <= min(c + k, 25); j++) temp = max(temp, v[j] + 1);
            v[c] = max(temp,v[c]);
            ans = max(ans, temp);
        }
        return ans;
    }
};