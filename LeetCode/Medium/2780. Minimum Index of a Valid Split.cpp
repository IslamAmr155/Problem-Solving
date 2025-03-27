class Solution {
public:
    int minimumIndex(vector<int>& nums) {
        unordered_map<int,int> rm, lm;
        for (int& n : nums) lm[n]++;
        int n = nums.size();
        for (int i = 0;i<n;i++) {
            lm[nums[i]]--, rm[nums[i]]++;
            if (rm[nums[i]] > (i+1)/2 && lm[nums[i]] > (n-i-1)/2) return i;
        }
        return -1;
    }
};