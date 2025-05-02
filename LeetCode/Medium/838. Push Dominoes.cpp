class Solution {
public:
    string pushDominoes(string dominoes) {
        int n = dominoes.size();
        vector<int> r(n), l(n);
        int fr = 0, fl = 0;
        for (int i = 0, j = n-1;j>=0;i++,j--) {
            if (dominoes[i] == 'R') r[i] = fr = n;
            else if (dominoes[i] == 'L') r[i] = fr = 0;
            else r[i] = fr = max(fr-1,0);
            if (dominoes[j] == 'L') l[j] = fl = n;
            else if (dominoes[j] == 'R') l[j] = fl = 0;
            else l[j] = fl = max(fl-1,0);
        }
        string ans = "";
        for (int i = 0;i<n;i++) {
            if (dominoes[i] != '.') ans += dominoes[i];
            else if (r[i] < l[i]) ans += 'L';
            else if (r[i] > l[i]) ans += 'R';
            else ans += '.';
        }
        return ans;
    }
};