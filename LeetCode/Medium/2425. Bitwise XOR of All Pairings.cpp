class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int c1 = nums1.size(), c2 = nums2.size(), ans = 0;
        if (c1 % 2)
            for (int& x : nums2) ans ^= x;
        if (c2 % 2)
            for (int& x : nums1) ans ^= x;
        return ans;
    }
};