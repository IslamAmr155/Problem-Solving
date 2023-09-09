class Solution {
public:
    void rec(vector<int>& c,int t,vector<int>& v,vector<vector<int>>& r,int j)
    {
        if (accumulate(v.begin(),v.end(),0) == t)
        {
            r.push_back(v);
            return;
        }
        else if (accumulate(v.begin(),v.end(),0) > t)
            return;
        int len = c.size();
        for (int i=j;i<len;i++)
        {
            v.push_back(c[i]);
            rec(c,t,v,r,i);
            v.pop_back();
        }
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int len = candidates.size();
        vector<vector<int>> r;
        for (int i=0;i<len;i++)
        {
            vector<int> v;
            v.push_back(candidates[i]);
            rec(candidates,target,v,r,i);
        }
        return r;
    }
};