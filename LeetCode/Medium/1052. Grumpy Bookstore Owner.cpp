class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int ans = 0, n = customers.size(), j = min(minutes - 1, n - 1), g = 0;
        for (int i = 0;i < n;i++) {
            if (!grumpy[i]) {
                ans += customers[i];
                customers[i] = 0;
            }
            if (i <= j) g += customers[i];
        }
        int i = 0, x = g;
        j++;
        while (j < n) {
            x += customers[j++] - customers[i++];
            g = max(g, x);
        }
        return ans + g;
    }
};