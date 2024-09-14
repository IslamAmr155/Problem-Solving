class Solution {
public:
    bool isPossibleDivide(vector<int>& nums, int k) {
        if (nums.size() % k) return false;
        map<int,int> m;
        for (int x : nums) m[x]++;
        for (auto i = m.begin();i != m.end();i++) 
            if (i->second > 0)
                for (int j = 1;j<k;j++)
                    if ((m[i->first + j] -= i->second) < 0) return false;
        return true;
    }
};