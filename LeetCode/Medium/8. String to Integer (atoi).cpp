class Solution {
public:
    int myAtoi(string s) {
        int i = 0;
        while (s[i] == ' ')
            i++;
        int sign = 1;
        if (s[i] == '-')
        {
            sign = -1;
            i++;
        }
        else if (s[i] == '+')
            i++;
        if (!(s[i] >= '0' && s[i] <= '9'))
            return 0;
        int n=s.size();
        int sum = 0;
        while (s[i] >= '0' && s[i] <= '9' && i < n)
        {
            if (sum > INT_MAX/10 || sum < INT_MIN/10)
            {
                if (sign == 1)
                    return INT_MAX;
                else
                    return INT_MIN;
            }
            if (sum >= INT_MAX/10 || sum <= INT_MIN/10)
            {
                if (sign ==  1 && s[i] > '7')
                    return INT_MAX;
                else if (sign == -1 && s[i] > '8')
                    return INT_MIN;
            }
            sum *= 10;
            if (sign == 1)
                sum += s[i] - '0';
            else
                sum -= s[i] - '0';
            i++;
        }
        return sum;
    }
};