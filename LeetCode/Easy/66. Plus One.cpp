class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int i = digits.size() - 1;
        bool c = 0;
        digits[i] += 1;
        for (i;i>=0;i--)
        {
            if (c)
            {
                digits[i]++;
                c = 0;
            }
            if(digits[i] > 9)
            {
                digits[i] -= 10;
                c = 1;
                if (i == 0)
                {
                    digits.insert(digits.begin(),0);
                    i++;
                }
            }
            else
                return digits;
        }
        return digits;
    }
};