class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        queue<int> zeros;
        int ma = INT_MIN;
        int c = 0;
        int n = nums.size();
        int i = 0,start = 0;
        if (k == 0)
        {
            while (i < n)
            {
                if (nums[i])
                    c++;
                else
                {
                    ma = max(ma,c);
                    c=0;
                }
                i++;
            }
        }
        else
        {
            while (i < n)
            {
                if (!nums[i])
                {
                    if (zeros.size() == k)
                    {
                        int zero = zeros.front();
                        zeros.pop();
                        c -=  (zero - start + 1);
                        start = zero+1;
                    }
                    zeros.push(i);
                }
                c++;
                ma = max(ma,c);
                i++;
            }
        }
        return max(ma,c);
    }
};