class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int n = s.size(), i = 0, j = 0, m = INT_MIN;
        for (;j<n;j++) {
            maxCost -= abs(s[j] - t[j]);
            m = max(m,j - i); 
            while (maxCost < 0) {
                maxCost += abs(s[i] - t[i]);
                i++;
            }
        }
        return max(m,j - i);
    }
};