class Solution {
public:
    int numTilings(int n) {
        if (n == 1)
            return 1;
        else if (n == 2)
            return 2;
        else if (n == 3)
            return 5;
        vector<long long> v(n);
        int m = 1e9 + 7;
        v[0] = 1;
        v[1] = 2;
        v[2] = 5;
        for (int i=3;i<n;i++)
            v[i] = (v[i-1]*2 + v[i-3]) % m;
        return v[n-1];
    }
};