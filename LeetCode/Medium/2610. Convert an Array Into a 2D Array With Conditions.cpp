class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        int prev = -1, i = 0;
        for (int x : nums)
        {
            if (x != prev)
                i = 0;
            if (i == ans.size())
                ans.push_back({x});
            else
                ans[i].push_back(x);
            i++;
            prev = x;
        }
        return ans;
    }
};