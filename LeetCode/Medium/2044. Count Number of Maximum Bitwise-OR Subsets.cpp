class Solution {
public:
    int rec(vector<int>& nums, int i, int& m,int c) {
        if (i == nums.size()) return c == m;
        return rec(nums,i+1,m,c) + rec(nums,i+1,m,c | nums[i]);
    }

    int countMaxOrSubsets(vector<int>& nums) {
        int m = 0;
        for (int& x:nums) m |= x;
        return rec(nums,0,m,0);
    }
};