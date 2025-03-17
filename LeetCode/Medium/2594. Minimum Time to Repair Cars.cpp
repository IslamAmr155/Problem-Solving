class Solution {
public:
    long long repairCars(vector<int>& ranks, int cars) {
        long long left = 1, right = *max_element(ranks.begin(), ranks.end()), m;
        right = right * cars * cars;
        while (left < right) {
            m = (left + right) / 2;
            int c = 0, i = 0;
            while (i < ranks.size() && c < cars) c += sqrt(m / ranks[i++]);
            if (c >= cars) right = m;
            else left = m + 1;
        }
        return left;
    }
};