class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors, int k) {
        int n = colors.size(), ans = 0, c = 0;
        for (int i = 0;i<k-1;i++)
            c += colors[i] == colors[i+1];
        ans += c == 0;
        for (int i = 1, j = k-1;i<n;i++,j++) {
            c -= colors[i] == colors[i-1];
            c += colors[j%n] == colors[(j+1)%n];
            ans += c == 0;
        }
        return ans;
    }
};