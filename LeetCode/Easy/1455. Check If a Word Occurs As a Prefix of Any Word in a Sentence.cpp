class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        stringstream ss(sentence);
        string s;
        int i = 1;
        while (ss >> s) {
            if (!s.compare(0, searchWord.size(), searchWord)) return i;
            i++;
        }
        return -1;
    }
};