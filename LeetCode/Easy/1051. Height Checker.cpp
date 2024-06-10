class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> v(101);
        for (int x : heights) v[x]++;
        
        int ans = 0, cur = 1;
        for (int x : heights) {
            while (cur < 101 && !v[cur]) cur++;
            if (cur != x) ans++;
            v[cur]--;
        }

        return ans;
    }
};