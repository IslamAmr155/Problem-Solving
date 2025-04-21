class Solution {
public:
    int numberOfArrays(vector<int>& differences, int lower, int upper) {
        long mi = lower, ma = upper, l = lower, u = upper;
        for (int& d : differences)
            mi += d, ma += d, mi = max(mi, l), ma = min(ma, u);
        return ma - mi + 1 > 0 ? ma - mi + 1 : 0;
    }
};