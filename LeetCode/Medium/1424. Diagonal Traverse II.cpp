class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        unordered_map<int, vector<int>> m;
        for (int i = 0;i<nums.size();i++)
            for (int j = 0;j<nums[i].size();j++) m[i+j].push_back(nums[i][j]);
        vector<int> ans;
        int k = 0;
        while (m.find(k) != m.end()) {
            for (int i = m[k].size() - 1;i >= 0;i--) ans.push_back(m[k][i]);
            k++;
        }
        return ans;
    }
};