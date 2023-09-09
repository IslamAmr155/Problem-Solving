class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> v(2*n);
        for (int i=0,j=0;j<n;i+=2,j++)
        {
            v[i] = nums[j];
            v[i+1] = nums[j+n];
        }
        return v;
};
};