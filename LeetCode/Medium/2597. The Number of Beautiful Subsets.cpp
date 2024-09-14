class Solution {
public:
    int ans = 0;
    map<int,int> m;

    void rec(int i, vector<int>& nums, int& k, int c) {
        if (i == nums.size()) return;
        for (int j = i+1;j<nums.size();j++) {
            if (!m[nums[j] - k] && !m[nums[j] + k]) {
                m[nums[j]]++;
                ans++;
                rec(j, nums,k, c+1);
                m[nums[j]]--;
            }
        }
    }

    int beautifulSubsets(vector<int>& nums, int k) {
        int n = nums.size();
        for (int i = n - 1;i >= 0;i--) {
            m[nums[i]]++;
            ans++;
            rec(i,nums,k, 0);
            m[nums[i]]--;
        }
        return ans;
    }
};