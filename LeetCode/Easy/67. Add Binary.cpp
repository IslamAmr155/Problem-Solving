class Solution {
public:
    string addBinary(string a, string b) {
        string res = "";
        int i = a.size() - 1;
        int j = b.size() - 1;
        int c = 0,s = 0;
        while (i >=0 || j >= 0)
        {
            s = c;
            if (i >= 0)
                s += a[i--] - '0';
            if (j >= 0)
                s += b[j--] - '0';
            s >= 2 ? c = 1:c=0;
            res += to_string(s % 2);
        }
        if (c)
            res += '1';
        reverse(res.begin(),res.end());
        return res;
    }
};