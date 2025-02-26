class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> s;
        for (int& i : nums)
            if (s.contains(i)) return true;
            else s.insert(i);
        return false;
    }
};