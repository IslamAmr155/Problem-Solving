class Solution {
public:
    vector<pair<string,int>> b;
    int m = INT_MIN;

    void rec(int i,int c,int x)
    {
        if (i == b.size()) return;
        for (int j = i;j<b.size();j++)
        {
            if (__builtin_popcount(x)+__builtin_popcount(b[j].second) == __builtin_popcount(x ^ b[j].second))
            {
                c += b[j].first.size();
                m = max(m,c);
                rec(j+1,c,x^b[j].second);
                c -= b[j].first.size();
            }
        }
    }

    int maxLength(vector<string>& arr) {
        for (string s : arr)
        {
            int x = 0;
            for (char c : s)
            {
                int a = pow(2,c-'a');
                if ((x | a) == x)
                {
                    x = 0;
                    break;
                }
                x |= a;
            }
            if (x)
                b.push_back({s,x});
        }
        rec(0,0,0);
        return max(m,0);
    }
};