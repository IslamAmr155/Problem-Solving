class Solution {
public:
    string makeGood(string s) {
        int i = 0, n = s.size();
        while (i < n - 1)
        {
            if (abs(s[i] - s[i+1]) == 32)
            {
                s.erase(i,2);
                if (i) i--;
                n = s.size();
            }
            else i++;
        }
        return s;
    }
};