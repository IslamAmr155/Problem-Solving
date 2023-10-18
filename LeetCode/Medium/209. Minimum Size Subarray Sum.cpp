class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int mi = INT_MAX, sum = 0, i = 0;
        for (int j=0;j<nums.size();j++)
        {
            sum += nums[j];
            while (sum >= target)
            {
                mi = min(mi,j-i+1);
                sum -= nums[i];
                i++;
            }
        }
        if (mi != INT_MAX)
            return mi;
        return 0;
    }
};