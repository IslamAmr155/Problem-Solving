class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        long long sum = 0, ans = 0;
        for (int n : nums)
        {
            if (sum > n) ans = sum + n;
            sum += n;
        }
        return (ans != 0) ? ans : -1;
    }
};