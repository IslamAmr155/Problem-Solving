class Solution {
public:
    int rotatedDigits(int n) {
        vector<int> v = {0,1,5,-1,-1,2,9,-1,8,6};
        int ans = 0;
        for (int j = 1;j<=n;j++)
        {
            int x = 0, m = 1, i = j;
            while (i)
            {
                if (v[i%10] == -1)
                {
                    x = j;
                    break;
                }
                x += v[i%10] * m;
                m *= 10;
                i /= 10;
            }
            if (x != j)
                ans++;
        }
        return ans;
    }
};