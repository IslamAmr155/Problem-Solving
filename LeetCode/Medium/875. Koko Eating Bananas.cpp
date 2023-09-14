class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1, right = *max_element(piles.begin(),piles.end()),m,total = 0;
        while (left < right)
        {
            m = left + (right - left)/2;
            total = 0;
            for (int p:piles)
                total += (p + m - 1) / m;
            if (total > h)
                left = m + 1;
            else
                right = m;
        }
        return left;
    }
};