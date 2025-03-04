class Solution {
public:
    bool rec(int& n,int m,int p) {
        if (m == n) return true;
        if (m > n || pow(3,p) > n) return false;
        if (rec(n,m+pow(3,p),p+1) || rec(n,m,p+1)) return true;
        return false;
    }

    bool checkPowersOfThree(int n) {
        return rec(n,0,0);
    }
};