class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n = nums.size(), a = 0, ans = 0;
        unordered_map<int,int> m;
        m[0] = -1;
        for (int i = 0;i < n;i++)
        {
            if (nums[i]) a++;
            else a--;
            if (m.count(a)) ans = max(ans,i - m[a]);
            else m[a] = i;
        }
        return ans;
    }
};