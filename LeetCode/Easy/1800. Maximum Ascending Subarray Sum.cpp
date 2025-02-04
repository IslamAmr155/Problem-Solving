class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int ans = 0, c = nums[0];
        for (int i = 1;i<nums.size();i++) {
            if (nums[i] > nums[i-1]) c += nums[i];
            else {
                ans = max(ans,c);
                c = nums[i];
            } 
        }
        return max(ans,c);
    }
};