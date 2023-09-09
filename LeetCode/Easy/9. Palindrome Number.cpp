class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0)
            return false;
        string s = to_string(x);
        int len = s.size();
        for (int i=0;i<len;i++)
        {
            if (s[i] != s[len - i - 1])
                return false;
        }
        return true;
    }
};