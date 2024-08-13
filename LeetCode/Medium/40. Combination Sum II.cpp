class Solution {
public:
    vector<vector<int>> ans;

    void rec(vector<int>& f, int t, vector<int>& v,int i) {
        if (!t) ans.push_back(v);
        else {
            for (;i<=t;i++) {
                if (f[i]) {
                    f[i]--;
                    v.push_back(i);
                    rec(f,t-i,v,i);
                    v.pop_back();
                    f[i]++;
                }
            }
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> f(target+1), temp;
        for (int x : candidates) 
            if (x <= target) f[x]++;
        rec(f,target,temp,1);
        return ans;
    }
};