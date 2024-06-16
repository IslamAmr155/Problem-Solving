class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        vector<int> v(2e5);
        int ans = 0, temp;
        for (int x : nums) {
            temp = x;
            while (v[temp]) temp++;
            v[temp] = 1;
            ans += (temp - x);
        }
        return ans;
    }
};