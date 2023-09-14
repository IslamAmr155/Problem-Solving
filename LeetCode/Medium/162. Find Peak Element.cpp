class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size(), l = 0, e = n-1,m = l + (e-l)/2;
        if (n == 1)
            return 0;
        else if (n == 2)
            if (nums[0] > nums[1])
                return 0;
            else
                return 1;
        while (1)
        {
            if (m == 0 && nums[0] > nums[1])
                return 0;
            else if (m == n-1 && nums[m] > nums[m-1])
                return m;
            else if (nums[m] > nums[m-1] && nums[m] > nums[m+1])
                return m;
            else if (nums[m-1] > nums[m])
                m--;
            else
                m++;
        }
        return m;
    }
};