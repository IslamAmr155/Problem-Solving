class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int prev = nums[0], n = nums.size(), ans = 0, prod = 0;
        for (int i=1;i<n;i++)
        {
            if (nums[i] != prev)
            {
                prod++;
                prev = nums[i];
            }
            ans += prod;
        }
        return ans;
    }
};