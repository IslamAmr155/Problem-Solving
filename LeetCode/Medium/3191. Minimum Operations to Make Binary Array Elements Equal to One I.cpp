class Solution {
public:
    int minOperations(vector<int>& nums) {
        int ans = 0;
        for (int i = 0, j = nums.size() - 1;i < j;i++,j--) {
            if (!nums[i]) {
                nums[i] = 1;
                nums[i+1] = 1 - nums[i+1];
                nums[i+2] = 1 - nums[i+2];
                ans++;
            } 
            if (!nums[j]) {
                nums[j] = 1;
                nums[j-1] = 1 - nums[j-1];
                nums[j-2] = 1 - nums[j-2];
                ans++;
            }
        }
        return accumulate(nums.begin(), nums.end(), 0) == nums.size() ? ans : -1;
    }
};