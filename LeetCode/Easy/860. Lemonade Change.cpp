class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int f = 0, t = 0;
        for (int x : bills) {
            if (x == 5) f++;
            else if (x == 10) {
                t++;
                if (--f < 0) return false;
            }
            else {
                if (f - 1 >= 0 && t - 1 >= 0) f--, t--;
                else if (f - 3 >= 0) f -= 3;
                else return false;
            }
        }
        return true;
    }
};