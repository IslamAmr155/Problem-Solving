class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int> m = {{0,1}};
        int ans = 0, c = 0;
        for (int i = 0;i<nums.size();i++) {
            c += nums[i];
            int rem = c % k < 0 ? (c % k) + k : c % k; 
            ans += m[rem];
            m[rem]++;
        }
        return ans;
    }
};