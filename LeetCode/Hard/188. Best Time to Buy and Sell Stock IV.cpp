class Solution {
public:
    int maxProfit(int k, vector<int>& prices) {
        vector<int> b(k+1,INT_MAX), s(k+1,0);
        for (int p : prices)
            for (int i = 1;i<=k;i++)
            {
                b[i] = min(b[i],p-s[i-1]);
                s[i] = max(s[i],p-b[i]);
            }
        return s[k];
    }
};