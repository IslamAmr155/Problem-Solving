class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        vector<int> f(101);
        for (int x : nums) f[x]++;
        int m = *max_element(f.begin(),f.end());
        int ans = 0;
        for (int x : f) if (x == m) ans += m;
        return ans;
    }
};