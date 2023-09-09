class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> hash1,hash2;
        for (int i=0;i<nums1.size();i++)
            hash1[nums1[i]]++;
        for (int i=0;i<nums2.size();i++)
            hash2[nums2[i]]++;
        vector<vector<int>> ans(2);
        for (auto h:hash1)
            if (!hash2[h.first])
                ans[0].push_back(h.first);
        for (auto h:hash2)
            if (!hash1[h.first])
                ans[1].push_back(h.first);
        return ans;
    }
};