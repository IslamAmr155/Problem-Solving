class Solution {
public:
    int minimumLength(string s) {
        int i = 0, j = s.size() - 1;
        if (i == j) return 1;
        while (i < j)
        {
            if (s[i] != s[j]) break;
            if (s[i+1] == s[i]) i++;
            else if (s[j-1] == s[j]) j--;
            else
            {
                i++;
                j--;
                if (i == j) return 1;
            }
        }
        return i >= j ? 0 : j - i + 1;
    }
};