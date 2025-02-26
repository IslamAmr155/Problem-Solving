class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int p = 0, n = 0, maxp = 0, maxn = 0;
        for (int& num: nums) {
            if (num > 0) {
                p += num;
                maxp = max(maxp, p);
                n -= num;
                if (n < 0) n = 0;
            } else {
                n += abs(num);
                maxn = max(maxn, n);
                p += num;
                if (p < 0) p = 0;
            }
        }
        return max(maxp, maxn);
    }
};