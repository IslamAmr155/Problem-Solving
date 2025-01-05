class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        vector<int> v(s.size() + 1);
        for (vector<int> x : shifts) {
            if (x[2]) {
                v[x[0]]++;
                v[x[1] + 1]--;
            } else {
                v[x[0]]--;
                v[x[1] + 1]++;
            }
        }
        int t = 0, m = 0; 
        for (int i = 0;i<s.size();i++) {
            t += v[i];
            m = t % 26;
            if (s[i] + m > 'z') s[i] = s[i] + m - 'z' + 'a' - 1;
            else if (s[i] + m < 'a') s[i] = 'z' - 'a' + s[i] + m + 1;
            else s[i] += m;
        }
        return s;
    }
};