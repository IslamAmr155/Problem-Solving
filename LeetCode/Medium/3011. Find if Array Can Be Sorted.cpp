class Solution {
public:
    bool canSortArray(vector<int>& nums) {
        for (int i = 1;i<nums.size();i++) {
            int k = i, j = i;
            while (--j >= 0) 
                if (nums[k] < nums[j])
                    if (__builtin_popcount(nums[k]) == __builtin_popcount(nums[j])) {
                        swap(nums[k], nums[j]);
                        k--;
                    }
                    else return false;
        }
        return true;
    }
};