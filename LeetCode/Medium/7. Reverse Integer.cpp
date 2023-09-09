class Solution {
public:
    int reverse(int x) {
        if (x == INT_MIN)
            return 0;
        int w = abs(x);
        string s = to_string(w);
        string ma = to_string(INT_MAX);
        string mi = ma;
        mi[9]++;
        std::reverse(s.begin(),s.end());
        if (x < 0)
        {
            if (s.size() == 10 && s > mi)
                return 0;
        }
        else
        {
            if (s.size() == 10 && s > ma)
                return 0;
        }
        int fina = stoi(s);
        if (x < 0)
            fina *= -1;
        return fina;
    }
};