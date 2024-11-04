class Solution {
public:
    string compressedString(string word) {
        string ans = "";
        char c = word[0];
        int f = 1;
        for (int i = 1;i<word.size();i++) {
            if (c == word[i] && f < 9) f++;
            else {
                ans += to_string(f);
                ans += c;
                f = 1;
                c = word[i];
            }
        }
        ans += to_string(f);
        ans += c;
        return ans;
    }
};