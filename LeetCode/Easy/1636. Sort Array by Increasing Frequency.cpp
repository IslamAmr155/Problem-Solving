class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int> m;
        for (int x : nums) m[x]++;
        sort(nums.begin(),nums.end(), [&](const int& a, const int& b) {
            return (m[a] == m[b]) ? a > b : m[a] < m[b];
        });
        return nums;
    }
};