class Solution {
public:
    string clearDigits(string s) {
        int i = 0, n = s.size();
        while (i < n) {
            if (isdigit(s[i])) {
                s.erase(--i,2);
                n = s.size();
            }
            else i++;
        }
        return s;
    }
};