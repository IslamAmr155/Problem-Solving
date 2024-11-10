class Solution {
public:
    int minimumSubarrayLength(vector<int>& nums, int k) {
        int ans = INT_MAX, i = 0, c = 0;
        vector<int> v(32);
        for (int j = 0;j<nums.size();j++) {
            if (nums[j] >= k) return 1;
            c |= nums[j];
            int temp = nums[j];
            for (int m=0;m<32 && temp;m++) {
                v[m] += temp & 1;
                temp >>= 1;
            }
            if (c >= k) {
                while (i < j && c >= k) {
                    ans = min(ans,j-i+1);
                    temp = nums[i];
                    for (int m=0;m<32 && temp;m++) {
                        v[m] -= temp & 1;
                        if (!v[m]) c &= ~(1<<m); 
                        temp >>= 1;
                    }     
                    i++;         
                }
            }
        }
        return ans == INT_MAX ? -1 : ans;
    }
};