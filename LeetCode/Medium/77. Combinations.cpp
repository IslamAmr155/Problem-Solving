class Solution {
public:
    vector<vector<int>> ans;

    void rec(vector<int> v, int& n, int& k,int i)
    {
        if (v.size() == k)
        {
            ans.push_back(v);
            return;
        }
        for (int j=i;j<=n;j++)
        {
            v.push_back(j);
            rec(v,n,k,j+1);
            v.pop_back();
        }
    }

    vector<vector<int>> combine(int n, int k) {
        rec({},n,k,1);
        return ans;
    }
};