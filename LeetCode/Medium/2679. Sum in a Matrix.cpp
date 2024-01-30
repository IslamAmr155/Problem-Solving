class Solution {
public:
    int matrixSum(vector<vector<int>>& nums) {
        for (int i = 0;i<nums.size();i++)
            sort(nums[i].begin(),nums[i].end());
        int ans = 0;
        for (int i = 0;i<nums[0].size();i++)
        {
            int t = INT_MIN;
            for (int j = 0;j<nums.size();j++)
                t = max(t,nums[j][i]);
            ans += t;
        }
        return ans;
    }
};