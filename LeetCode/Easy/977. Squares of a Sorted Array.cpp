class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int i = 0;
        for (i = 0;i<nums.size();i++)
            if (nums[i] >= 0) break;
        int j = i-1;
        vector<int> ans;
        while (j >= 0 && i < nums.size())
        {
            int x = pow(nums[i],2), y = pow(nums[j],2);
            if (x < y)
            {
                ans.push_back(x);
                i++;
            }
            else
            {
                ans.push_back(y);
                j--;
            }
        }
        for (;i<nums.size();i++) ans.push_back(pow(nums[i],2));
        for (;j>=0;j--) ans.push_back(pow(nums[j],2));
        return ans;
    }
};