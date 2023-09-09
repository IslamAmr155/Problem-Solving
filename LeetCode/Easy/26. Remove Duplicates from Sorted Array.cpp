class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 0,len = nums.size(),j;
        for (int i=0;i<len;i++)
        {
            nums[k] = nums[i];
            k++;
            for (j =i+1;j<len;j++)
            {
                if(nums[i] != nums[j])
                {
                    i = j - 1;
                    break;
                }
                else if (j == len - 1)
                    i = len -1;
            }
        }
        return k;
    }
};