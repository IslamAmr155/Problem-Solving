class Solution {
public:
    bool isCircularSentence(string sentence) {
        if (sentence[0] != sentence[sentence.size()-1]) return false;
        stringstream s(sentence);
        string s1, s2;
        s >> s1;
        while (s >> s2) {
            if (s1[s1.size() - 1] != s2[0]) return false;
            s1 = s2;
        }
        return true;
    }
};