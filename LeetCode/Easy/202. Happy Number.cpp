class Solution {
public:
    bool isHappy(int n) {
        if (n == 1 || n == 7)
            return true;
        while (n > 9)
        {
            int sum = 0;
            while (n > 0)
            {
                sum += pow(n%10,2);
                n /= 10;
            }
            n = sum;
            if (n == 1 || n == 7)
                return true;
        }
        return false;
    }
};