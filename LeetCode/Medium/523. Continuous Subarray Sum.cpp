class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> m = {{0, -1}, {nums[0]%k, 0}};
        for (int i = 1;i<nums.size();i++) {
            nums[i] = (nums[i] + nums[i-1]) % k;
            if (!m.count(nums[i])) m[nums[i]] = i;
            else if (i - m[nums[i]] > 1) return true; 
        }
        return false;
    }
};