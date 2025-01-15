class Solution {
public:
    int minimizeXor(int num1, int num2) {
        int c1 = __builtin_popcount(num1), c2 = __builtin_popcount(num2); 
        if (c1 == c2) return num1;
        else if (c1 > c2) {
            int p = 1, x = 0;
            while (c1 != c2) {
                if (num1 & p) x |= p, c1--;
                p <<= 1;
            }
            return num1 ^ x;
        }
        int p = 1;
        while (c1 != c2) {
            if (!(num1 & p)) num1 |= p, c1++;
            p <<= 1;
        }
        return num1;
    }
};