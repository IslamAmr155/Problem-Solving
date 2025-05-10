class Solution {
public:
    long long minSum(vector<int>& nums1, vector<int>& nums2) {
        long long s1 = 0, s2 = 0;
        int c1 = 0, c2 = 0;
        for (int& i : nums1) {
            if (i == 0) c1++;
            s1 += i;
        }
        for (int& i : nums2) {
            if (i == 0) c2++;
            s2 += i;
        }
        if (c1 == 0 && c2 == 0 && s1 != s2) return -1;
        if ((c1 != 0 && c2 != 0) || (c1 == 0 && s1 >= s2 + c2) || (c2 == 0 && s2 >= s1 + c1)) 
            return max(s1 + c1, s2 + c2);
        return -1;
    }
};