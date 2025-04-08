class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        set<int> s;
        int i = nums.size() - 1;
        while (i >= 0)
            if (s.count(nums[i])) break;
            else s.insert(nums[i--]);
        return ceil((i + 1) / 3.0);
    }
};