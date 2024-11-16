class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        int p = 0, i = 0;
        for (i = 1;i<k;i++) 
            if (nums[i] != nums[i-1] + 1) p++;
        vector<int> ans;
        if (!p) ans.push_back(nums[k-1]);
        else ans.push_back(-1);
        for (int j = i, i = 1;j<nums.size();j++, i++) {
            if (nums[j] != nums[j-1] + 1) p++;
            if (nums[i] != nums[i-1] + 1) p--;
            if (!p) ans.push_back(nums[j]);
            else ans.push_back(-1);
        }
        return ans;
    }
};