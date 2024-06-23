class Solution {
public:
    int getMaximumConsecutive(vector<int>& coins) {
        sort(coins.begin(), coins.end());
        int cur = 1;
        for (int x : coins) {
            if (x > cur) return cur;
            cur += x;
        }
        return cur;
    }
};