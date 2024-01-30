class Solution {
public:
    string largestMerge(string word1, string word2) {
        string ans = "";
        int i = 0, j = 0;
        while (i < word1.size() && j < word2.size())
        {
            if (word1.substr(i) >= word2.substr(j))
            {
                ans += word1[i];
                i++;
            }
            else
            {
                ans += word2[j];
                j++;
            }
        }
        if (i < word1.size())
            return ans + word1.substr(i);
        else if (j < word2.size())
            return ans + word2.substr(j);
        return ans;
    }
};