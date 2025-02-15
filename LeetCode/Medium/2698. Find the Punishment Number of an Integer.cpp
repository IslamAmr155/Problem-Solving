class Solution {
public:
    bool rec(int i, int n) {
        if (!i && !n) return true;
        else if (!i) return false;
        int m = 1;
        while (i / m != 0) {
            m *= 10;
            if(rec(i / m, n - (i % m))) return true;
        }
        return false;
    }

    int punishmentNumber(int n) {
        int ans = 0;
        for (int i = 1;i<=n;i++)
            if (rec(i*i, i)) ans += i*i;
        return ans;
    }
};