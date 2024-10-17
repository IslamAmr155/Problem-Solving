class Solution {
public:
    int maximumSwap(int num) {
        string s = to_string(num);
        int j = 0, m = INT_MIN, k =-1, n = -1;
        for (int i = s.size() - 1;i>=0;i--) {
            if (s[i] > m) m = s[i], j = i;
            if (s[i] < m) k = i, n = j;
        }
        if (k != -1) swap(s[k], s[n]);
        return stoi(s);
    }
};