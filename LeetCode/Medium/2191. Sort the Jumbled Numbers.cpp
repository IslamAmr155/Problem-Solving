class Solution {
public:
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
        int n = nums.size(), temp, p;
        vector<pair<int,int>> v(n);
        for (int i = 0;i<n;i++) {
            temp = nums[i];
            p = 1;
            v[i].second = i;
            if (!nums[i]) v[i].first = mapping[nums[i]]; 
            while (temp) {
                v[i].first += mapping[temp%10] * p;
                p *= 10;
                temp /= 10;
            }
        }
        sort(v.begin(),v.end());
        vector<int> ans(n);
        for (int i = 0;i<n;i++) ans[i] = nums[v[i].second];
        return ans;
    }
};