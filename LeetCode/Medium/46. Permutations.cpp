class Solution {
public:
    void rec(vector<vector<int>>& v,int s,vector<int>& cur,vector<int>& nums)
    {
        if(cur.size() == s)
        {
            v.push_back(cur);
            return;
        }
        for(int i=0;i<s;i++)
        {
            auto it = find(cur.begin(),cur.end(), nums[i]);
            if(it == cur.end())
            {
 	            cur.push_back(nums[i]);
                rec(v,s,cur,nums);
                cur.pop_back();
            }
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        int len = nums.size();
        vector<vector<int>> v;
        for (int i=0;i<len;i++)
        {
            vector<int> cur;
            cur.push_back(nums[i]);
            rec(v,len,cur,nums);
        }
        return v;
    }
};