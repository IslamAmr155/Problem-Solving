class Solution {
public:
    int maximumCandies(vector<int>& candies, long long k) {
        int left = 0, right = *max_element(candies.begin(), candies.end()), m;
        while (left < right) {
            m = (left + right + 1) / 2;
            long long t = 0;
            for (int& c: candies) t += c / m;
            if (t < k)
                right = m - 1;
            else 
                left = m;
        }
        return left;
    }
};