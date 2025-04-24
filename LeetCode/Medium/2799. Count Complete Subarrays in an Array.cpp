class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        unordered_set<int> s(nums.begin(), nums.end());
        int c = s.size(), ans = 0;
        s.clear();
        unordered_map<int,int> m;
        for (int i = 0, j = 0;i<nums.size();i++) {
            s.insert(nums[i]);
            m[nums[i]]++;
            while (s.size() == c) {
                ans += nums.size() - i;
                m[nums[j]]--;
                if (!m[nums[j++]]) s.erase(nums[j-1]);
            }
        }
        return ans;
    }
};