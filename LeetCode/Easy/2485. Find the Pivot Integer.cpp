class Solution {
public:
    int pivotInteger(int n) {
        int i = 0, j = n, k = 0;
        while (k <= n)
        {
            if (i < j) i += ++k;
            else if (k == n && i == j) return k;
            else j += --n;
        }
        return -1;
    }
};