class Solution {
public:
    int longestSquareStreak(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        unordered_map<int,int> m;
        int ans = 0, s = 0;
        for (int& i : nums) {
            s = sqrt(i);
            if (s * s == i && m.contains(s)) m[i] = m[s] + 1;
            else m[i] = 1;
            ans = max(ans, m[i]);
        }
        return ans > 1 ? ans : -1;
    }
};