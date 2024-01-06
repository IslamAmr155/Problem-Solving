class Solution {
public:
    int binaryGap(int n) {
        int ma = 0, bit = 0, prev = 1000;
        while (n)
        {
            bit++;
            if (n & 1 == 1)
            {
                ma = max(ma, bit - prev);
                prev = bit;
            }
            n = n>>1;
        }
        return ma;
    }
};