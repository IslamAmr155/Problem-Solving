class Solution {
public:
    int minZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        int n = nums.size(), ans = 0, c = 0;
        vector<int> d(n+1);
        for (int i = 0;i<n;i++) {
            c += d[i];
            while (nums[i] + c > 0) {
                if (ans == queries.size()) return -1;
                d[queries[ans][0]] -= queries[ans][2];
                d[queries[ans][1]+1] += queries[ans][2];
                if (i >= queries[ans][0] && i <= queries[ans][1]) c -= queries[ans][2];
                ans++;
            }
        }
        return ans;
    }
};