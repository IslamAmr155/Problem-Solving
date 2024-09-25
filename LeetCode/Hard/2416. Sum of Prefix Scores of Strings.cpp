class Trie {
    public:
        Trie* n[26];
        int c = 0;
};

class Solution {
public:
    vector<int> sumPrefixScores(vector<string>& words) {
        Trie* trie = new Trie(), *t;
        for (string& s:words) {
            t = trie;
            for (char& c:s) {
                if (!t->n[c-'a']) t->n[c-'a'] = new Trie();
                t->n[c-'a']->c++;
                t = t->n[c-'a'];
            }
        }      
        vector<int> ans(words.size());
        for (int i = 0;i<words.size();i++) {
            t = trie;
            for (char& c:words[i]) {
                ans[i] += t->n[c-'a']->c;
                t = t->n[c-'a'];
            }
        }
        return ans;
    }
};