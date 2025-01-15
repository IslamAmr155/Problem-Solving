class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n = A.size();
        vector<int> ans(n), f(n,1);
        for (int i = n-1;i>=0;i--) {
            ans[i] = n;
            n -= f[A[i] - 1];
            f[A[i] - 1] = 0;
            n -= f[B[i] - 1];
            f[B[i] - 1] = 0;
        }
        return ans;
    }
};