class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans = {{}};
        queue<vector<int>> q;
        vector<int> v;
        for (int i = 0;i<nums.size();i++) {
            q.push({nums[i]});
            for (int j=i+1;j<nums.size();j++) {
                int n = q.size();
                while (n--) {
                    v = q.front();
                    q.push(v);
                    q.pop();
                    v.push_back(nums[j]);
                    q.push(v);
                }
            }
            while (!q.empty()) {
                ans.push_back(q.front());
                q.pop();
            }
        }
        return ans;
    }
};