class Solution {
public:
    int minLength(string s) {
        int i = 0, n = s.size() - 1;
        while (i < n)
            if ((s[i] == 'A' && s[i+1] == 'B') || (s[i] == 'C' && s[i+1] == 'D')) {
                s.erase(i,2);
                i = max(0, --i);
                n = s.size() - 1;
            }
            else i++;
        return s.size();
    }
};