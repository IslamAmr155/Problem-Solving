class Solution {
public:
    string reverseWords(string s) {
        string ans = "", word="";
        int j = s.size() - 1;
        while (j >= 0 && s[j] == ' ')
            j--;
        while (j >= 0)
        {
            if (s[j] != ' ')
            {
                word = s[j] + word;
                j--;
            }
            else if (word.size() == 0)
                j--;
            else
            {
                ans += word + ' ';
                word = "";
                j--;
            }
        }
        if (word.size() != 0)
            return ans += word;
        else
            return ans.substr(0,ans.size()-1);
    }
};