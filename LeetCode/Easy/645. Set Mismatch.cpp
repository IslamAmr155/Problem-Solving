class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        vector<bool> v(n);
        vector<int> ans;
        for (int x : nums)
            if (!v[x])
                v[x] = 1;
            else
                ans.push_back(x);
        for (int i = 1;i<=n;i++)
            if (!v[i])
            {
                ans.push_back(i);
                break;
            }
        return ans;
    }
};