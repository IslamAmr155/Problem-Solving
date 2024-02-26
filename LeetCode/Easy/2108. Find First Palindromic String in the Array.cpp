class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        bool f;
        for (string s : words)
        {
            f = true;
            for (int i = 0;i<s.size()/2;i++)
                if (s[i] != s[s.size()-i-1])
                {
                    f = false;
                    break;
                }
            if (f) return s;
        }
        return "";
    }
};