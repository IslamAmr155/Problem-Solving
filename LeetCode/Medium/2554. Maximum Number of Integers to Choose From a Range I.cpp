class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        set<int> s(banned.begin(),banned.end());
        int sum = 0, c = 0;
        for (int i = 1;i<=n;i++) 
            if (s.contains(i)) continue;
            else if (sum + i > maxSum) break;
            else sum += i, c++;
        return c;
    }
};