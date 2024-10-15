class Solution {
public:
    long long minimumSteps(string s) {
        long long ans = 0, w = 0;
        for (int i = 0;i<s.size();i++) 
            if (s[i] == '0') {
                ans += i - w;
                w++;
            }
        return ans;
    }
};