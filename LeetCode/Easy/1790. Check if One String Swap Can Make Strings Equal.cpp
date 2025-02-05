class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int c = 0;
        char x = ' ', y = ' ';
        for (int i = 0;i<s2.size();i++) 
            if (s1[i] != s2[i]) {
                c++;
                if (c == 1) {
                    x = s1[i];
                    y = s2[i];
                }
                else if ((c == 2 && (x != s2[i] || y != s1[i])) || c > 2) return false; 
            }
        return c == 0 || c == 2;
    }
};