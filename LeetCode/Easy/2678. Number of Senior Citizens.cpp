class Solution {
public:
    int countSeniors(vector<string>& details) {
        int ans = 0;
        for (string s : details) ans += ((s[11] - '0') * 10 + s[12] - '0') > 60;
        return ans;
    }
};