class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        vector<int> ans, v(10);
        for (int& d : digits) v[d]++;
        for (int i = 1;i<10;i++) {
            if (!v[i]) continue;
            v[i]--;
            int x = i;
            for (int j = 0;j<10;j++) {
                if (!v[j]) continue;
                v[j]--;
                int y = x * 10 + j;
                for (int k = 0;k<10;k+=2) {
                    if (!v[k]) continue;
                    ans.push_back(y * 10 + k);
                }
                v[j]++;
            }
            v[i]++;
        }
        return ans;
    }
};