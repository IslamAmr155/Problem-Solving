class Solution {
public:
    int minSwaps(string s) {
        int n = 0, m = 0, z = 0, x = 0;
        char c = '0';
        for (int i = 0;i<s.size();i++)
        {
            if (s[i] == '0') z++;
                else x++;
            if (s[i] != c) n++;
                else m++;
            c = '1' - c + '0';
        }
        if (abs(z - x) > 1) return -1;
        if (z == x) return min((int)n/2,(int)m/2);
        else if (z > x) return n/2;
        else return m/2;
    }
};