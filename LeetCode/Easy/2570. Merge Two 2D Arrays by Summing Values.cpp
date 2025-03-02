class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        if (nums2[nums2.size()-1][0] > nums1[nums1.size()-1][0]) swap(nums1, nums2);
        int i = 0, j = 0, n = nums1.size();
        while (i < n || j < nums2.size()) {
            if (j == nums2.size()) break;
            if (nums1[i][0] == nums2[j][0]) nums1[i++][1] += nums2[j++][1];
            else if (nums1[i][0] < nums2[j][0]) i++;
            else {
                nums1.insert(nums1.begin() + i, nums2[j++]);
                n++, i++;
            }
        }
        return nums1;
    }
};