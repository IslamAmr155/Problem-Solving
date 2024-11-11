class Solution {
public:
    bool primeSubOperation(vector<int>& nums) {
        vector<bool> p(1001, 1);
        p[0] = p[1] = 0;
        for (int i = 2; i * i <= 1000; i++)
            if (p[i])
                for (int j = i * i; j <= 1000; j += i)
                    p[j] = false;
        for (int i = 0;i<nums.size();i++) {
            for (int j = nums[i] - 1;j >= 0;j--)
                if (p[j] && (i == 0 || nums[i] - j > nums[i-1])) {
                    nums[i] -= j;
                    break;
                }
            if (i > 0 && nums[i] <= nums[i-1]) return false;
        }
        return true;
    }
};