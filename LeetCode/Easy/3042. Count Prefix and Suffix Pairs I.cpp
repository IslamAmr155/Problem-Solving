class Solution {
public:
    int countPrefixSuffixPairs(vector<string>& words) {
        int ans = 0;
        for (int i = 0;i<words.size();i++)
            for (int j = i+1;j<words.size();j++)
                if (words[j].compare(0, words[i].size(), words[i]) == 0 && 
                    words[j].compare(words[j].size() - words[i].size(), words[i].size(), words[i]) == 0)
                        ans++;
        return ans;
    }
};