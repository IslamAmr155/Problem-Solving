class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n = 0, p = 0;
        for (int& num: nums)
            if (num > 0) p++;
            else if (num < 0) n++;
        return max(n,p);
    }
};