class Solution {
public:
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        int n = nums.size(), c = 0;
        vector<int> d(n+1);
        for (int i = 0;i<queries.size();i++)
            d[queries[i][0]]--, d[queries[i][1]+1]++;
        for (int i = 0;i<n;i++) {
            c += d[i];
            if (nums[i] + c > 0) return false;
        }
        return true;
    }
};