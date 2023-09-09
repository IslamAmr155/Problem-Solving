class Solution {
public:
    int romanToInt(string s) {
        int len = s.size(), sum =0;
        char prev,pres;
        map <char,int> m = {{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
        for (int i=0;i<len;i++)
        {
            prev = s[i];
            if (i != len - 1)
                pres = s[i+1];
            if (prev == 'I' && (pres == 'V' || pres == 'X'))
                sum -= m[prev];
            else if (prev == 'X' && (pres == 'L' || pres == 'C'))
                sum -= m[prev];
            else if (prev == 'C' && (pres == 'D' || pres == 'M'))
                sum -= m[prev];
            else
            sum += m[prev];
        }
        return sum;
    }
};