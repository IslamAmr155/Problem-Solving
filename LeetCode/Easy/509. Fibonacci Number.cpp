class Solution {
public:
    int rec(int n,vector<int>& v)
    {
        if (n == 0)
            return 0;
        if (n == 1)
            return 1;
        if (v[n] != 0)
            return v[n];
        v[n] = rec(n-1,v) + rec(n-2,v);
        return v[n];
    }

    int fib(int n) {
        vector<int> v(n+1);
        return rec(n,v);
    }
};