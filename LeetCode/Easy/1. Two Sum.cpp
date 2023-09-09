class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> m;
        vector<int> v (2);
        int n;
        for (int i=0;i<nums.size();i++)
        {
            n = target - nums[i];
            if (m.find(n) != m.end())
            {
                v[0] = m[n];
                v[1] = i;
                break;
            }
            m[nums[i]] = i;
        }
        return v;
    }
};