class Solution {
public:
    int ans = 0;

    int rec(vector<string>& words, map<int,int>& m, vector<int>& score, int i) {
        int t = 0, a = 0;
        bool f = false;
        for (char c : words[i]) {
            if(--m[c - 'a'] < 0) f = true;
            t += score[c - 'a'];
        }
        if (f) {
            for (char c : words[i]) m[c-'a']++;
            return 0;
        }
        for (int j=i+1;j<words.size();j++) a = max(a,rec(words,m,score,j));
        ans = max(ans,t+a);
        for (char c : words[i]) m[c-'a']++;
        return t+a;
    }

    int maxScoreWords(vector<string>& words, vector<char>& letters, vector<int>& score) {
        map<int,int> m;
        for (char c : letters) m[c - 'a']++;
        for (int i = 0;i<words.size();i++) rec(words,m,score,i);
        return ans;
    }
};