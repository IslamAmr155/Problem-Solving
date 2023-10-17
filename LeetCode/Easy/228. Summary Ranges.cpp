class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        int n = nums.size();
        if (n == 0)
            return {};
        int start = nums[0], end = nums[0];
        vector<string> ans;
        for (int i = 1; i < n;i++)
        {
            if (nums[i] == end + 1)
                end = nums[i];
            else
            {
                if (start == end)
                    ans.push_back(to_string(start));
                else
                    ans.push_back(to_string(start)+"->"+to_string(end));
                if (i <= n - 1)
                    start = end = nums[i];
                else
                    return ans;
            }
        }
        if (start != end)
            ans.push_back(to_string(start)+"->"+to_string(end));
        else 
            ans.push_back(to_string(start));
        return ans;
    }
};