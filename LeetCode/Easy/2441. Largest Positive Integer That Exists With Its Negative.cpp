class Solution {
public:
    int findMaxK(vector<int>& nums) {
        set<int> s;
        int ans = -1;
        for (int x : nums) {
            if (s.find(-x) != s.end()) ans = max(ans,abs(x));
            else s.insert(x);
        }
        return ans;
    }
};