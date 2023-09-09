class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int left = 0,i = 0;
        int right = accumulate (nums.begin()+1,nums.end(),0);
        while (left != right && i < nums.size() - 1)
        {
            left += nums[i];
            right -= nums[i+1];
            i++;
        }
        if (left == right)
            return i;
        else
            return -1;
    }
};