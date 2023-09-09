class Solution {
public:
    static inline void rtrim(std::string &s) {
    s.erase(std::find_if(s.rbegin(), s.rend(), [](unsigned char ch) {
        return !std::isspace(ch);
    }).base(), s.end());
}

    int lengthOfLastWord(string s) {
        rtrim(s);
        int c=0,i = s.size() -1;
        while(i >= 0 && s[i] != ' ')
        {
            c++;
            i--;
        }
        return c;
    }
};