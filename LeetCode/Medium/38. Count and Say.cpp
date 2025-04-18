class Solution {
public:
    string countAndSay(int n) {
        string ans = "1";
        n--;
        while(n--) {
            string s = ans;
            ans = "";
            int i = 0;
            while(i<s.size()) {
                char c = s[i], k = 0;
                while (i<s.size() && s[i] == c) i++,k++;
                ans += to_string(k) + c;
            }
        }
        return ans;
    }
};