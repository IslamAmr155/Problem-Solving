class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0, j = s.size() - 1;
        while (i < j)
        {
            s[i] = tolower(s[i]);
            s[j] = tolower(s[j]);
            if (!( s[i] >= 48 && s[i] <= 57) && !(s[i] >= 97 && s[i] <= 122))
            {
                i++;
                continue;
            }
            if (!( s[j] >= 48 && s[j] <= 57) && !(s[j] >= 97 && s[j] <= 122))
            {
                j--;
                continue;
            }
            if (s[i] != s[j])
                return false;
            i++;
            j--;
        }
        return true;
    }
};