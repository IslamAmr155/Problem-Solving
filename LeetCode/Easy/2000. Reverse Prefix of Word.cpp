class Solution {
public:
    string reversePrefix(string word, char ch) {
        int n = word.find(ch,0);
        if (n != word.npos) 
            for (int i = 0;i<=n/2;i++) swap(word[i], word[n-i]);
        return word;
    }
};