class Solution {
public:
    double myPow(double x, int n) {
        if (!n) return 1.0;
        else if (n == 1) return x;
        else if (n == -1) return 1/x;
        if (n % 2 == 0) return myPow(x*x,n/2);
        else return ((n > 0) ? x*myPow(x*x,n/2) : (1/x)*myPow(x*x,n/2));
    }
};