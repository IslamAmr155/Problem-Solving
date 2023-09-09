class Solution {
public:
    vector<int> KMP_table(string p)
    {
        int m = p.size();
        vector<int> pi(m);
        pi[0] = 0;
        int k = 0;
        for (int q = 1;q<m;q++)
        {
            while (k > 0 && p[k] != p[q])
                k = pi[k-1];
            if (p[k] == p[q])
                k++;
            pi[q] = k;
        }
        return pi;
    }

    int strStr(string haystack, string needle) {
        int n = haystack.size();
        int m = needle.size();
        vector<int> pi = KMP_table(needle);
        int q = 0;
        for (int i = 0;i<n;i++)
        {
            while (q > 0 && needle[q] != haystack[i])
                q = pi[q-1];
            if (needle[q] == haystack[i])
                q++;
            if (q == m)
                return i-m+1;
        }
        return -1;
    }
};
