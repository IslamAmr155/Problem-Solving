class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        vector<vector<int>> ans(n/3);
        for (int i = 0;i<n;i+=3)
        {
            if (abs(nums[i]-nums[i+1]) > k || abs(nums[i]-nums[i+2]) > k)
                return {};
            ans[i/3] = {nums[i],nums[i+1],nums[i+2]};
        }
        return ans;
    }
};