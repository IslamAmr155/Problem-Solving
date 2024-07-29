class Solution {
public:
    int numTeams(vector<int>& rating) {
        int ans = 0;
        for (int i = 1;i < rating.size();i++) {
            int leftl = 0, leftg = 0, rightl = 0, rightg = 0;
            for (int j = 0;j<rating.size();j++) {
                if (j < i) {
                    if (rating[j] > rating[i]) leftg++;
                    else leftl++;
                }
                else if (i < j) {
                    if (rating[j] > rating[i]) rightg++;
                    else rightl++;
                }
            }
            ans += leftl * rightg + leftg * rightl;
        }
        return ans;
    }
};