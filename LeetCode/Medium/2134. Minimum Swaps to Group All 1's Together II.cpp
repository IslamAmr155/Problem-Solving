class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int tot = accumulate(nums.begin(), nums.end(), 0), m = accumulate(nums.begin(),nums.begin() + tot,0), c = m;
        nums.insert(nums.end(), nums.begin(), nums.end());
        int n = nums.size();
        for (int i = tot;i<n;i++) {
            c += nums[i] - nums[i-tot];
            m = max(m,c);
        }
        return tot - m;
    }
};