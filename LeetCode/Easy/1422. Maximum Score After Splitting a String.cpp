class Solution {
public:
    int maxScore(string s) {
        int zeros = s[0] == '0', ones = 0, ans = 0;
        for (int i = 1;i<s.size();i++) ones += s[i] == '1';
        ans = zeros + ones;
        for (int i = 1;i<s.size()-1;i++) {
            zeros += s[i] == '0';
            ones -= s[i] == '1';
            ans = max(ans, zeros + ones);
        }
        return ans;
    }
};