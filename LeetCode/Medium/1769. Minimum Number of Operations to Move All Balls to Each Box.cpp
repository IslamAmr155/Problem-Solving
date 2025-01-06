class Solution {
public:
    vector<int> minOperations(string boxes) {
        int d = 0, r = 0, l = 0, n = boxes.size();
        for (int i = 0;i<n;i++) 
            if (boxes[i] == '1') r++, d+=i;
        vector<int> ans(n);
        for (int i = 0;i<n;i++) {
            ans[i] = d;
            if (boxes[i] == '1') r--, l++;
            d -= r;
            d += l;
        }
        return ans;
    }
};