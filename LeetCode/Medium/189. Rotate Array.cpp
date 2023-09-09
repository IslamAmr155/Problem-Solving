class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        int rot = k % n;
        if (rot == 0)
            return;

        int c  = 0, start = 0, i = 0, temp1 = nums[0],temp2;
        while (c < rot)
        {
            do
            {
                temp2 = nums[(i+rot)%n];
                nums[(i+rot)%n] = temp1;
                temp1 = temp2;
                i += rot;
                if (i >= n)
                {
                    c++;
                    i = i%n;
                }
            } while (i != start && c < rot);
            start++;
            i = start;
            temp1=nums[start];
        }
    }
};