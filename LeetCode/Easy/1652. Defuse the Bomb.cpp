class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n = code.size();
        vector<int> ans(n);
        if (!k) return ans;
        int i = k > 0 ? 1 : n + k, j = i, c = 0;
        k = abs(k);
        while(k--) {
            c += code[i];
            i = (++i) % n;
        }
        ans[0] = c;
        for (int k = 1;k<n;k++) {
            c -= code[j];
            c += code[i];
            j = (++j) % n;
            i = (++i) % n;
            ans[k] = c;
        } 
        return ans;
    }
};