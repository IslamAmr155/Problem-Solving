class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0;
        int j = 1;
        while (j < nums.size() && !nums[j])
            j++;
        while (j < nums.size() && i <nums.size())
        {
            if (!nums[i])
            {
                swap(nums[i],nums[j]);
                j++;
                while (j < nums.size() && !nums[j])
                    j++;
            }
            else
            {
                i++;
                if (i > j)
                {
                    j = i+1;
                    while (j < nums.size() && !nums[j])
                        j++;
                        
                }    
            }
        }
    }
};