class Solution {
public:
    vector<int> smallestRange(vector<vector<int>>& nums) {
        vector<vector<int>> v;
        for (int i = 0;i<nums.size();i++)
            for (auto& x:nums[i]) v.push_back({x,i});
        sort(v.begin(), v.end());
        vector<int> ans = {v[0][0], v[v.size() - 1][0]};
        int k = 0, i = 0;
        unordered_map<int,int> m;
        for (auto& x: v) {
            if(!m[x[1]]++) k++;
            if (k == nums.size())  {
                while (m[v[i][1]] - 1 > 0) m[v[i][1]]--, i++;
                if (ans[1] - ans[0] > x[0] - v[i][0]) ans = {v[i][0], x[0]};
            }
        }
        return ans;
    }
};