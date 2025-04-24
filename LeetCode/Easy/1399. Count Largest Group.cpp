class Solution {
public:
    int countLargestGroup(int n) {
        unordered_map<int, int> m;
        int ma = 0, ans = 0;
        for (int i = 1;i<=n;i++) {
            int temp = i, c = 0;
            while (temp) c += temp % 10, temp /= 10;
            if (++m[c] > ma) ma = m[c], ans = 1;
            else if (m[c] == ma) ans++;
        }
        return ans;
    }
};