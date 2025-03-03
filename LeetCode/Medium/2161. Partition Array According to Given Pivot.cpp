class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int a = 0, e = 0;
        for (int& num: nums)
            if (num < pivot) a++, e++;
            else if (num == pivot) a++;
        int b = 0;
        vector<int> ans(nums.size());
        for (int& num: nums)
            if (num < pivot) ans[b++] = num;
            else if (num == pivot) ans[e++] = num;
            else ans[a++] = num;
        return ans;
    }
};