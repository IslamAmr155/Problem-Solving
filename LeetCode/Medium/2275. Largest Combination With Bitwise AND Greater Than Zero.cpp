class Solution {
public:
    int largestCombination(vector<int>& candidates) {
        vector<int> v(32);
        for (int c : candidates)
            while (c)
            {
                int temp = c & -c;
                c ^= temp;
                v[__builtin_popcount(temp-1)]++;
            }
        return *max_element(v.begin(),v.end());
    }
};