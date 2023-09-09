class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string str = "";
        int len1 = word1.size();
        int len2 = word2.size();
        int len = min(len1,len2);
        for (int j = 0;j<len;j++)
        {
            str += word1[j];
            str += word2[j];
        }
        if (len1 > len2)
            str = str + word1.substr(len2);
        else if (len2 > len1)
            str = str + word2.substr(len1);
        return str;
    }
};