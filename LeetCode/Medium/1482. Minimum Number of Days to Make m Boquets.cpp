class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size(), l = 0, r = 1e9, mid;
        if (n < (long long)m*k) return -1;
        while (l <= r) {
            mid = (l+r)/2;
            int c = 0, b = 0;
            for (int x : bloomDay) 
                if (x > mid) c = 0;
                else if (++c == k) {
                    b++;
                    c = 0;
                }
            if (b >= m) r = mid - 1;
            else l = mid + 1;
        }
        return l;
    }
};