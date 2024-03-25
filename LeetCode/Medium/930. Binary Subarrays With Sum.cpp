class Solution {
public:
    int helper (vector<int>& v, int g)
    {
        if (g < 0) return 0;
        int i = 0, sum = 0, ans = 0;
        for (int j = 0; j < v.size(); j++)
        {
            sum += v[j];
            while (sum > g) sum -= v[i++];
            ans += j - i + 1;
        }
        cout << ans << endl;
        return ans;
    }

    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return helper(nums, goal) - helper(nums, goal - 1);
    }
};