class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int mi = *min_element(nums.begin(), nums.end());
        if (mi < k) return -1;
        else if (mi == k) return set(nums.begin(), nums.end()).size() - 1;
        return set(nums.begin(), nums.end()).size();
    }
};