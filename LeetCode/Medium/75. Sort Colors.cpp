class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> v(3);
        for (int x : nums) v[x]++;
        int j = 0;
        for (int i = 0;i<nums.size();i++) {
            while (!v[j]--) j++;
            nums[i] = j;
        }
    }
};