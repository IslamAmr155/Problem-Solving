class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v(1001),ans;
        for (int x : nums1) v[x]++;
        for (int x : nums2) 
            if (v[x]) {
                ans.push_back(x);
                v[x]--;
            }
        return ans;
    }
};