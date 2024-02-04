class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size(), ans = 0;
        vector<int> v(n);
        v[0] = nums[0];
        for (int i = 1;i<n;i++)
            v[i] = v[i-1] + nums[i];
        unordered_map<int,int> m;
        for (int i = 0;i<n;i++)
        {
            if (v[i] == k) ans++;
            if (m.find(v[i]-k) != m.end())
                ans += m[v[i]-k];
            m[v[i]]++;
        }
        return ans;
    }
};