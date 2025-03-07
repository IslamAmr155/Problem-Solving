class Solution {
public:
    vector<int> closestPrimes(int left, int right) {
        vector<bool> v(right+1,1);
        v[1] = false;
        for (int i = 2;i<=sqrt(right);i++)
            if (v[i]) {
                int j = i*i;
                while (j <= right) {
                    v[j] = false;
                    j += i;
                }
            }
        vector<int> ans = {-1,-1};
        int j = left, d = INT_MAX;
        for (int i = left+1;i<=right;i++) {
            if (v[i]) {
                if(v[j] && i-j < d) {
                    d = i-j;
                    ans = {j,i};
                } 
                j = i;
            }
        }
        return ans;
    }
};