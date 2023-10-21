class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> s;
        int n = nums.size();
        if (!n)
            return 0;
        for (int i=0;i<n;i++)
            s.insert(nums[i]);
        int ans = INT_MIN, c = 1;
        for (auto i = s.begin(); i != --s.end(); ++i)
        {
            auto j = i;
            j++;
            if (*i == *j - 1)
                c++;
            else
            {
                ans = max(ans,c);
                c = 1;
            }
        }
        return max(ans,c);
    }
};