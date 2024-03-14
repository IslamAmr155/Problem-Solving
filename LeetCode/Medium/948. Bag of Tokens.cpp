class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(),tokens.end());
        int s = 0, i = 0, n = tokens.size(), j = n - 1, ans = 0;
        while (i <= j)
        {
            if (tokens[i] <= power)
            {
                s++;
                ans = max(ans,s);
                power -= tokens[i];
                i++;
            }
            else if (s > 0)
            {
                s--;
                power += tokens[j];
                j--;
            }
            else break;
        }
        return ans;
    }
};