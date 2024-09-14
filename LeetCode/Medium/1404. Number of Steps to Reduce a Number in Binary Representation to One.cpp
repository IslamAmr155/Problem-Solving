class Solution {
public:
    int numSteps(string s) {
        int ans = 0;
        while (s != "1") {
            ans++;
            if (s[s.size() - 1] == '0') s = s.substr(0,s.size() - 1);
            else {
                int i = s.size() - 1;
                while (i >= 0) {
                    if (s[i] == '1') s[i] = '0';
                    else {
                        s[i] = '1';
                        break;
                    }
                    i--;
                }
                if (i == -1) s.insert(0,"1");
            }
        }
        return ans;
    }
};