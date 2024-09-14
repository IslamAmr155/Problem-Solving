class Solution {
public:
    int calc(int x) {
        int a = 0;
        while (x) {
            a += x % 10;
            x /= 10;
        }
        return a;
    }

    int getLucky(string s, int k) {
        int ans = 0;
        for (char c : s) {
            int temp = c - 'a' + 1;
            ans += calc(temp);
        }
        while (--k) ans = calc(ans);
        return ans;
    }
};