class Solution {
public:
    vector<vector<int>> ans;

    void rec(int sum,vector<int> num,int i,int& k,int& n)
    {
        if (sum > n || (sum != n && num.size() == k))
            return;
        if (sum == n && num.size() == k)
        {
            ans.push_back(num);
            return;
        }
        for (;i<=9;i++)
        {
            num.push_back(i);
            rec(sum+i,num,i+1,k,n);
            num.pop_back();
        }
    }

    vector<vector<int>> combinationSum3(int k, int n) {
        rec(0,{},1,k,n);
        return ans;    
    }
};