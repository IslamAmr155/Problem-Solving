class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        copy(nums2.begin(),nums2.end(),back_inserter(nums1));
        sort(nums1.begin(),nums1.end());
        int len = nums1.size();
        int mid = len / 2;
        if (len % 2 == 0)
            return (nums1[mid] + nums1[mid - 1]) / 2.0;
        else
            return nums1[mid];
    }
};