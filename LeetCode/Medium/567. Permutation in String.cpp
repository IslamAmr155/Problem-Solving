class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char,int> m;
        for (char c : s1) m[c]++;
        int i = 0, j = 0;
        while (j < s2.size()) {
            if (m.find(s2[j]) == m.end()) {
                while (i < j) m[s2[i++]]++;
                i++;
            }
            else if (m[s2[j]] == 0) {
                while (s2[i] != s2[j]) m[s2[i++]]++;
                i++;
            }
            else m[s2[j]]--;
            j++;
            if (j - i == s1.size()) return true;
        }
        return false;
    }
};