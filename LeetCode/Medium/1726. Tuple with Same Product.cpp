class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        unordered_map<int,int> m;
        int n = nums.size(), ans = 0;
        for (int i = 0;i<n;i++)
            for (int j = i+1;j<n;j++)
                m[nums[i]*nums[j]]+=2;
        for (auto p : m)
            ans += p.second * (p.second - 2);
        return ans;
    }
};