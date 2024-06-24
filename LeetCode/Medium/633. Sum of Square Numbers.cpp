class Solution {
public:
    bool judgeSquareSum(int c) {
        long long l = 0, h = ceil(sqrt(c)), res;
        while (l <= h) {
            res = l * l + h * h;
            if (res == c) return true;
            else if (res < c) l++;
            else h--;
        }
        return false;
    }
};