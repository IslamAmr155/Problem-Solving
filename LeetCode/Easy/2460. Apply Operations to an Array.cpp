class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int j = 0, n = nums.size();
        for (int i = 0;i<n;i++) {
            if (i < n - 1 && nums[i] == nums[i+1]) nums[i] *= 2, nums[i+1] = 0;
            if (nums[i]) {
                swap(nums[i], nums[j]);
                j++;
            }
        }
        return nums;
    }
};